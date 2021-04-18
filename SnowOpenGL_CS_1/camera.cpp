#include "camera.h"



camera::camera()
{
  struct SCamera camera_cord = {0,0,1.7, 0,0};
}


void camera::Camera_Apply(){
    glRotatef(-camera_cord.Xrot, 1,0,0);

}
