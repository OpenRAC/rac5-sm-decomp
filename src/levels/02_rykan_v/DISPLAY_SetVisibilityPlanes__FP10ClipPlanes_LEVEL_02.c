extern char *D_0020B100;
extern char D_00251C40[];

void DISPLAY_SetVisibilityPlanes__FP10ClipPlanes(char *value)
{
    if (value == 0)
        D_0020B100 = D_00251C40;
    else
        D_0020B100 = value;
}
