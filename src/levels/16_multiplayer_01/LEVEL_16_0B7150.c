/* LEVEL_16:0x0B7150 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_001AEC84;
extern void func_111DB0(int *p, int a1);

void func_0B7150(int *p)
{
    if (D_001AEC84 == 1)
        func_111DB0(p, 10);
    else
        func_111DB0(p, 29);
}
