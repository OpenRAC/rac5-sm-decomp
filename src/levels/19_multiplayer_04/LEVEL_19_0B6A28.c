/* LEVEL_19:0x0B6A28 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_001AFE04;
extern void func_112450(int *p, int a1);

void func_0B6A28(int *p)
{
    if (D_001AFE04 == 1)
        func_112450(p, 10);
    else
        func_112450(p, 29);
}
