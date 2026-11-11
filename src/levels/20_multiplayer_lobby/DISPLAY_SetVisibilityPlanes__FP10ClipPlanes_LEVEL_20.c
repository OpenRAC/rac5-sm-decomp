/* LEVEL_20:0x05D720 -- placement copy of LEVEL_01_07B380.c. */
extern char *D_00106858;
extern char D_00144670[];

void DISPLAY_SetVisibilityPlanes__FP10ClipPlanes(char *value)
{
    if (value == 0)
        D_00106858 = D_00144670;
    else
        D_00106858 = value;
}
