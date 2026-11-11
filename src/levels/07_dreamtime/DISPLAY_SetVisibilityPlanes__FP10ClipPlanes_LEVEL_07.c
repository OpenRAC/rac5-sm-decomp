/* LEVEL_07:0x07D570 -- placement copy of LEVEL_01_07B380.c. */
extern char *D_0020A440;
extern char D_00250030[];

void DISPLAY_SetVisibilityPlanes__FP10ClipPlanes(char *value)
{
    if (value == 0)
        D_0020A440 = D_00250030;
    else
        D_0020A440 = value;
}
