/* LEVEL_17:0x06EBB8 -- placement copy of LEVEL_01_07B380.c. */
extern char *D_00197778;
extern char D_001DE100[];

void DISPLAY_SetVisibilityPlanes__FP10ClipPlanes(char *value)
{
    if (value == 0)
        D_00197778 = D_001DE100;
    else
        D_00197778 = value;
}
