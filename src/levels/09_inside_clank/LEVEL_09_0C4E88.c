/* LEVEL_09:0x0C4E88 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_001EAA0C;
extern unsigned char D_001EA9B0;
extern void func_12E678(int *p, int a1);
extern void func_12E6A8(char *record);

void func_0C4E88(char *o)
{
    if (D_001EAA0C == 1)
        func_12E678((int *)o, 3);
    else if (D_001EA9B0 != 0)
        func_12E678((int *)o, 0x1D);
    else
        func_12E6A8(o);
}
