/* LEVEL_16:0x0B6848 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_001AEC84;
extern unsigned char D_001AEC28;
extern void func_111DB0(int *p, int a1);
extern void func_111DE0(char *record);

void func_0B6848(char *o)
{
    if (D_001AEC84 == 1)
        func_111DB0((int *)o, 3);
    else if (D_001AEC28 != 0)
        func_111DB0((int *)o, 0x1D);
    else
        func_111DE0(o);
}
