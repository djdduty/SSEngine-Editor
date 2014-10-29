#ifndef QTWINDOW_H
#define QTWINDOW_H

#include <QWindow>
#include <QOpenGLFunctions>
#include <QOpenGLPaintDevice>

class QtWindow : public QWindow, protected QOpenGLFunctions
{
    Q_OBJECT
public:
    explicit QtWindow(QWindow *parent = 0);
    ~QtWindow() {delete(m_context); delete(m_device);}

    virtual void render(QPainter* painter);
    virtual void render();

    virtual void initialize();

    void setAnimating(bool animating);

public slots:
    void renderLater();
    void renderNow();

private:
    bool m_update_pending;
    bool m_animating;

    QOpenGLContext *m_context;
    QOpenGLPaintDevice *m_device;

protected:
    bool event(QEvent* event);
    void exposeEvent(QExposeEvent *event);
};

#endif // GLWIDGET_H
