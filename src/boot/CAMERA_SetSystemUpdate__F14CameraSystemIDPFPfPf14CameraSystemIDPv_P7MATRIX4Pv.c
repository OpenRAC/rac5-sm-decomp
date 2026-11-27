/* Boot 0x01E68AB0 -- registers the update callback and its context for one camera system. */
extern char *camera_current;

void CAMERA_SetSystemUpdate__F14CameraSystemIDPFPfPf14CameraSystemIDPv_P7MATRIX4Pv(int id, void *update, void *context)
{
    int offset = id * 0x30;
    *(int *)(camera_current + offset + 0xB0) = 0;
    *(int *)(camera_current + offset + 0x90) = (int)update;
    *(int *)(camera_current + offset + 0x94) = (int)context;
}
