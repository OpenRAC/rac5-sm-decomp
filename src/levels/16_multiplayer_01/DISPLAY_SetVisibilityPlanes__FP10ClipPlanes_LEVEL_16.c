extern char *D_001A4178;
extern char D_001ECE00[];

void DISPLAY_SetVisibilityPlanes__FP10ClipPlanes(char *value)
{
    if (value == 0)
        D_001A4178 = D_001ECE00;
    else
        D_001A4178 = value;
}
