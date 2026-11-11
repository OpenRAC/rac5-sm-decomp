extern char *D_001E5040;
extern char D_002274B0[];

void DISPLAY_SetVisibilityPlanes__FP10ClipPlanes(char *value)
{
    if (value == 0)
        D_001E5040 = D_002274B0;
    else
        D_001E5040 = value;
}
