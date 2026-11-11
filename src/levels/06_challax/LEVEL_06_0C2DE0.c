/* LEVEL_06:0x0C2DE0 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_001EFB0C;
extern void func_12BDB0(int *p, int a1);

void func_0C2DE0(int *p)
{
    if (D_001EFB0C == 1)
        func_12BDB0(p, 10);
    else
        func_12BDB0(p, 29);
}
