/* FRONTEND:0x018518 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_0003048C;
extern void func_0229A0(int *p, int a1);

void func_018518(int *p)
{
    if (D_0003048C == 1)
        func_0229A0(p, 10);
    else
        func_0229A0(p, 29);
}
