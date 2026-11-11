/* LEVEL_02:0x0CE4E8 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_00215BCC;
extern unsigned char D_00215B70;
extern void func_13BA90(int *p, int a1);
extern void func_13BAC0(char *record);

void func_0CE4E8(char *o)
{
    if (D_00215BCC == 1)
        func_13BA90((int *)o, 3);
    else if (D_00215B70 != 0)
        func_13BA90((int *)o, 0x1D);
    else
        func_13BAC0(o);
}
