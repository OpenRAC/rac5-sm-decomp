/* LEVEL_01:0x0C8360 -- applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_00200C0C;
extern int D_00200C14;
extern void func_1356E0(int *p, int a1);

void func_0C8360(int *p)
{
    if (D_00200C0C == 1) {
        func_1356E0(p, 0x1D);
    } else {
        D_00200C14 = 0x11;
        func_1356E0(p, 0x13);
    }
}
