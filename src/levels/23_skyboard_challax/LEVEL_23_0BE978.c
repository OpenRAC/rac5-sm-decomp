/* LEVEL_23:0x0BE978 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_001D400C;
extern unsigned char D_001D3FB0;
extern void func_126E58(int *p, int a1);
extern void func_126E88(char *record);

void func_0BE978(char *o)
{
    if (D_001D400C == 1)
        func_126E58((int *)o, 3);
    else if (D_001D3FB0 != 0)
        func_126E58((int *)o, 0x1D);
    else
        func_126E88(o);
}
