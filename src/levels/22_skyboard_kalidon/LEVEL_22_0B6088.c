/* LEVEL_22:0x0B6088 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_0015FF8C;
extern unsigned char D_0015FF30;
extern void func_10CBB0(int *p, int a1);
extern void func_10CBE0(char *record);

void func_0B6088(char *o)
{
    if (D_0015FF8C == 1)
        func_10CBB0((int *)o, 3);
    else if (D_0015FF30 != 0)
        func_10CBB0((int *)o, 0x1D);
    else
        func_10CBE0(o);
}
