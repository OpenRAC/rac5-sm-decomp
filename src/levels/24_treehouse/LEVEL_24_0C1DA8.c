/* LEVEL_24:0x0C1DA8 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_001D188C;
extern void func_12B1E0(int *p, int a1);

void func_0C1DA8(int *p)
{
    if (D_001D188C == 1)
        func_12B1E0(p, 10);
    else
        func_12B1E0(p, 29);
}
