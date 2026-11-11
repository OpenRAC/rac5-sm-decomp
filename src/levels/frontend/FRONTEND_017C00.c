/* FRONTEND:0x017C00 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_0003048C;
extern unsigned char D_00030438;
extern void func_0229A0(int *p, int a1);
extern void func_0229D0(char *record);

void func_017C00(char *o)
{
    if (D_0003048C == 1)
        func_0229A0((int *)o, 3);
    else if (D_00030438 != 0)
        func_0229A0((int *)o, 0x1D);
    else
        func_0229D0(o);
}
