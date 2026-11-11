extern char D_00131F60[];
extern void *D_000FD3B4;

void CAMERA_SetCurrentCamera__FUi(int index)
{
    D_000FD3B4 = &D_00131F60[index * 0x118];
}
