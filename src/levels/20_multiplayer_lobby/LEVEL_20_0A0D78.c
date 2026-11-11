/* LEVEL_20:0x0A0D78 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_00111364;
extern unsigned char D_00111308;
extern void func_0E4B98(int *p, int a1);
extern void func_0E4BC8(char *record);

void func_0A0D78(char *o)
{
    if (D_00111364 == 1)
        func_0E4B98((int *)o, 3);
    else if (D_00111308 != 0)
        func_0E4B98((int *)o, 0x1D);
    else
        func_0E4BC8(o);
}
