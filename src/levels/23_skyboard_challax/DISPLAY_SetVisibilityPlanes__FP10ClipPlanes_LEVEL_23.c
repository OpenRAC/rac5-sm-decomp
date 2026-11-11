extern char *D_001C9540;
extern char D_00207BB0[];

void DISPLAY_SetVisibilityPlanes__FP10ClipPlanes(char *value)
{
    if (value == 0)
        D_001C9540 = D_00207BB0;
    else
        D_001C9540 = value;
}
