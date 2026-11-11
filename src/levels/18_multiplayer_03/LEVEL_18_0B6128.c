/* LEVEL_18:0x0B6128 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_001B0104;
extern void func_110A60(int *p, int a1);

void func_0B6128(int *p)
{
    if (D_001B0104 == 1)
        func_110A60(p, 10);
    else
        func_110A60(p, 29);
}
