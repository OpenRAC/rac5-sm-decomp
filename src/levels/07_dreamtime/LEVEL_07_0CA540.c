/* LEVEL_07:0x0CA540 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_00214F0C;
extern void func_1386E0(int *p, int a1);

void func_0CA540(int *p)
{
    if (D_00214F0C == 1)
        func_1386E0(p, 10);
    else
        func_1386E0(p, 29);
}
