/* LEVEL_01:0x0C7BD8 -- starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_00200C0C;
extern unsigned char D_00200BB0;
extern void func_1356E0(int *p, int a1);
extern void func_135710(char *record);

void func_0C7BD8(char *o)
{
    if (D_00200C0C == 1)
        func_1356E0((int *)o, 3);
    else if (D_00200BB0 != 0)
        func_1356E0((int *)o, 0x1D);
    else
        func_135710(o);
}
