/* LEVEL_09:0x0C5790 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_001EAA0C;
extern void func_12E678(int *p, int a1);

void func_0C5790(int *p)
{
    if (D_001EAA0C == 1)
        func_12E678(p, 10);
    else
        func_12E678(p, 29);
}
