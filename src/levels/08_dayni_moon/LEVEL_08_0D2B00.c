/* LEVEL_08:0x0D2B00 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_00249ACC;
extern unsigned char D_00249A70;
extern void func_146C18(int *p, int a1);
extern void func_146C48(char *record);

void func_0D2B00(char *o)
{
    if (D_00249ACC == 1)
        func_146C18((int *)o, 3);
    else if (D_00249A70 != 0)
        func_146C18((int *)o, 0x1D);
    else
        func_146C48(o);
}
