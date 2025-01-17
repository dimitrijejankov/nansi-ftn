#include <GL/glew.h>
#include <GL/glut.h>

void show_info_log(GLuint object, PFNGLGETSHADERIVPROC glGet__iv, PFNGLGETSHADERINFOLOGPROC glGet__InfoLog);

GLuint make_buffer(GLenum target, const void *buffer_data, GLsizei buffer_size);
GLuint make_texture(const char *filename);
GLuint make_shader(GLenum type, const char *filename);
GLuint make_program(GLuint vertex_shader, GLuint fragment_shader);
