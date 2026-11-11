extern char D_001DA760[];
extern void *D_0019BE4C;

void CAMERA_SetCurrentCamera__FUi(int index)
{
    D_0019BE4C = &D_001DA760[index * 0x118];
}
