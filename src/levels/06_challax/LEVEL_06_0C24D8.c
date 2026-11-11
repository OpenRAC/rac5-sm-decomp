/* LEVEL_06:0x0C24D8 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_001EFB0C;
extern unsigned char D_001EFAB0;
extern void func_12BDB0(int *p, int a1);
extern void func_12BDE0(char *record);

void func_0C24D8(char *o)
{
    if (D_001EFB0C == 1)
        func_12BDB0((int *)o, 3);
    else if (D_001EFAB0 != 0)
        func_12BDB0((int *)o, 0x1D);
    else
        func_12BDE0(o);
}
