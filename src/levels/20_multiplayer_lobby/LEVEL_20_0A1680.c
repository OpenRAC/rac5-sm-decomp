/* LEVEL_20:0x0A1680 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_00111364;
extern void func_0E4B98(int *p, int a1);

void func_0A1680(int *p)
{
    if (D_00111364 == 1)
        func_0E4B98(p, 10);
    else
        func_0E4B98(p, 29);
}
