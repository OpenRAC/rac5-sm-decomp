/* LEVEL_24:0x0C14A0 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_001D188C;
extern unsigned char D_001D1830;
extern void func_12B1E0(int *p, int a1);
extern void func_12B210(char *record);

void func_0C14A0(char *o)
{
    if (D_001D188C == 1)
        func_12B1E0((int *)o, 3);
    else if (D_001D1830 != 0)
        func_12B1E0((int *)o, 0x1D);
    else
        func_12B210(o);
}
