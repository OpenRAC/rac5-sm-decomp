extern char *D_0018E2CC;

void CAMERA_SetSystemUpdate__F14CameraSystemIDPFPfPf14CameraSystemIDPv_P7MATRIX4Pv(int index, int first, int second)
{
    int offset = index * 0x30;
    *(int *)(D_0018E2CC + offset + 0xb0) = 0;
    *(int *)(D_0018E2CC + offset + 0x90) = first;
    *(int *)(D_0018E2CC + offset + 0x94) = second;
}
