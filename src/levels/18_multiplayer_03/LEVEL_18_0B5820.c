/* LEVEL_18:0x0B5820 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_001B0104;
extern unsigned char D_001B00A8;
extern void func_110A60(int *p, int a1);
extern void func_110A90(char *record);

void func_0B5820(char *o)
{
    if (D_001B0104 == 1)
        func_110A60((int *)o, 3);
    else if (D_001B00A8 != 0)
        func_110A60((int *)o, 0x1D);
    else
        func_110A90(o);
}
