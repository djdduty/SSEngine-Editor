#ifndef TESTWINDOW_H
#define TESTWINDOW_H

#include "QtWindow.h"
#include <QOpenGLShaderProgram>

class TestWindow : public QtWindow
{
public:
    TestWindow();
    ~TestWindow() {}

    void initialize();
    void render();

private:
    GLuint loadShader(GLenum type, const char *source);
    GLuint m_posAttr;
    GLuint m_colAttr;
    GLuint m_matrixUniform;

    QOpenGLShaderProgram *m_program;
    int m_frame;
};

#endif
