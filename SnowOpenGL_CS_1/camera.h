#ifndef CAMERA_H
#define CAMERA_H
#include <QOpenGLWidget>


class camera
{
public:
    struct SCamera{
        float x,y,z;
        float Xrot, Zrot;
    } camera_cord;

    camera();
    void Camera_Apply();
};

#endif // CAMERA_H
