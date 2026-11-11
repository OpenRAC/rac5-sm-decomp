/* LEVEL_10:0x0C9018 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_00209C0C;
extern unsigned char D_00209BB0;
extern void func_133560(int *p, int a1);
extern void func_133590(char *record);

void func_0C9018(char *o)
{
    if (D_00209C0C == 1)
        func_133560((int *)o, 3);
    else if (D_00209BB0 != 0)
        func_133560((int *)o, 0x1D);
    else
        func_133590(o);
}
