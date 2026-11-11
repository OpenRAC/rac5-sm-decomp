/* LEVEL_18:0x0B6288 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_001B0104;
extern void func_110A60(int *p, int a1);

void func_0B6288(int *p)
{
    if (D_001B0104 == 1) {
        func_110A60(p, 8);
    } else {
        func_110A60(p, 0x1D);
    }
}
