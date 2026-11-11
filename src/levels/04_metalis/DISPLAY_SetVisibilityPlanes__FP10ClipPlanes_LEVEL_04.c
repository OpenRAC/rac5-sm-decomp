extern char *D_0020F600;
extern char D_00254F40[];

void DISPLAY_SetVisibilityPlanes__FP10ClipPlanes(char *value)
{
    if (value == 0)
        D_0020F600 = D_00254F40;
    else
        D_0020F600 = value;
}
