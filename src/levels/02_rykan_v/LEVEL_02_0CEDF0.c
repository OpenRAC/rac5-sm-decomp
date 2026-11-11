/* LEVEL_02:0x0CEDF0 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_00215BCC;
extern void func_13BA90(int *p, int a1);

void func_0CEDF0(int *p)
{
    if (D_00215BCC == 1)
        func_13BA90(p, 10);
    else
        func_13BA90(p, 29);
}
