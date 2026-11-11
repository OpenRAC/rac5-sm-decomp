/* LEVEL_17:0x0B5D88 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_001A2284;
extern unsigned char D_001A2228;
extern void func_111328(int *p, int a1);
extern void func_111358(char *record);

void func_0B5D88(char *o)
{
    if (D_001A2284 == 1)
        func_111328((int *)o, 3);
    else if (D_001A2228 != 0)
        func_111328((int *)o, 0x1D);
    else
        func_111358(o);
}
