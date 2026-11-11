/* LEVEL_04:0x0CD3F0 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_0021A0CC;
extern unsigned char D_0021A070;
extern void func_141B60(int *p, int a1);
extern void func_141B90(char *record);

void func_0CD3F0(char *o)
{
    if (D_0021A0CC == 1)
        func_141B60((int *)o, 3);
    else if (D_0021A070 != 0)
        func_141B60((int *)o, 0x1D);
    else
        func_141B90(o);
}
