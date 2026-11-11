extern char *D_001DE148;

void CAMERA_SetSystemUpdate__F14CameraSystemIDPFPfPf14CameraSystemIDPv_P7MATRIX4Pv(int index, int first, int second)
{
    int offset = index * 0x30;
    *(int *)(D_001DE148 + offset + 0xb0) = 0;
    *(int *)(D_001DE148 + offset + 0x90) = first;
    *(int *)(D_001DE148 + offset + 0x94) = second;
}
