extern char *D_0020E7C0;
extern char D_002555B0[];

void DISPLAY_SetVisibilityPlanes__FP10ClipPlanes(char *value)
{
    if (value == 0)
        D_0020E7C0 = D_002555B0;
    else
        D_0020E7C0 = value;
}
