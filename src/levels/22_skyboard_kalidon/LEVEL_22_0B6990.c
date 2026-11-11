/* LEVEL_22:0x0B6990 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_0015FF8C;
extern void func_10CBB0(int *p, int a1);

void func_0B6990(int *p)
{
    if (D_0015FF8C == 1)
        func_10CBB0(p, 10);
    else
        func_10CBB0(p, 29);
}
