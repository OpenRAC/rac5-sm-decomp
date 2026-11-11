extern char *D_001F6140;
extern char D_0023A730[];

void DISPLAY_SetVisibilityPlanes__FP10ClipPlanes(char *value)
{
    if (value == 0)
        D_001F6140 = D_0023A730;
    else
        D_001F6140 = value;
}
