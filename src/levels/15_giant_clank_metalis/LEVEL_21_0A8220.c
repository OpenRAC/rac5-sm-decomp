/* LEVEL_21:0x0A8220 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_0015588C;
extern unsigned char D_00155830;
extern void func_0F45A8(int *p, int a1);
extern void func_0F45D8(char *record);

void func_0A8220(char *o)
{
    if (D_0015588C == 1)
        func_0F45A8((int *)o, 3);
    else if (D_00155830 != 0)
        func_0F45A8((int *)o, 0x1D);
    else
        func_0F45D8(o);
}
