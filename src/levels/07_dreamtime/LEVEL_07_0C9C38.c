/* LEVEL_07:0x0C9C38 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_00214F0C;
extern unsigned char D_00214EB0;
extern void func_1386E0(int *p, int a1);
extern void func_138710(char *record);

void func_0C9C38(char *o)
{
    if (D_00214F0C == 1)
        func_1386E0((int *)o, 3);
    else if (D_00214EB0 != 0)
        func_1386E0((int *)o, 0x1D);
    else
        func_138710(o);
}
