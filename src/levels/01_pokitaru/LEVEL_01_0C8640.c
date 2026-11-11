/* LEVEL_01:0x0C8640 -- runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_00200C0C;
extern void func_1356E0(int *p, int a1);

void func_0C8640(int *p)
{
    if (D_00200C0C == 1) {
        func_1356E0(p, 8);
    } else {
        func_1356E0(p, 0x1D);
    }
}
