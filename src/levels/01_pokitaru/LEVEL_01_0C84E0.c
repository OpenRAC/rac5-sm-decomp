/* LEVEL_01:0x0C84E0 -- runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_00200C0C;
extern void func_1356E0(int *p, int a1);

void func_0C84E0(int *p)
{
    if (D_00200C0C == 1)
        func_1356E0(p, 10);
    else
        func_1356E0(p, 29);
}
