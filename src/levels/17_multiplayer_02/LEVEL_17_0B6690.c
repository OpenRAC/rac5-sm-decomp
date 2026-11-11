/* LEVEL_17:0x0B6690 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_001A2284;
extern void func_111328(int *p, int a1);

void func_0B6690(int *p)
{
    if (D_001A2284 == 1)
        func_111328(p, 10);
    else
        func_111328(p, 29);
}
