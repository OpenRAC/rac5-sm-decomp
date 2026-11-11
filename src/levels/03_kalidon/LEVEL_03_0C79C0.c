/* LEVEL_03:0x0C79C0 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_0021928C;
extern unsigned char D_00219230;
extern void func_133AA8(int *p, int a1);
extern void func_133AD8(char *record);

void func_0C79C0(char *o)
{
    if (D_0021928C == 1)
        func_133AA8((int *)o, 3);
    else if (D_00219230 != 0)
        func_133AA8((int *)o, 0x1D);
    else
        func_133AD8(o);
}
