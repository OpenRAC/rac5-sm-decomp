extern char D_00173A60[];
extern void *D_00143EB0;

void CAMERA_SetCurrentCamera__FUi(int index)
{
    D_00143EB0 = &D_00173A60[index * 0x118];
}
