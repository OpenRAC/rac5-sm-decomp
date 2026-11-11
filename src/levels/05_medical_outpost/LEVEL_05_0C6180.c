/* LEVEL_05:0x0C6180 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_001EFF8C;
extern unsigned char D_001EFF30;
extern void func_131058(int *p, int a1);
extern void func_131088(char *record);

void func_0C6180(char *o)
{
    if (D_001EFF8C == 1)
        func_131058((int *)o, 3);
    else if (D_001EFF30 != 0)
        func_131058((int *)o, 0x1D);
    else
        func_131088(o);
}
