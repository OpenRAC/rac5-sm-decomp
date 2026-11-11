/* LEVEL_05:0x0C6A88 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_001EFF8C;
extern void func_131058(int *p, int a1);

void func_0C6A88(int *p)
{
    if (D_001EFF8C == 1)
        func_131058(p, 10);
    else
        func_131058(p, 29);
}
