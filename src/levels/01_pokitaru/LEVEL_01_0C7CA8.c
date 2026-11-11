/* LEVEL_01:0x0C7CA8 -- applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_00200C0C;
extern void func_1356E0(int *p, int a1);

void func_0C7CA8(int *p)
{
    if (D_00200C0C == 1) {
        func_1356E0(p, 0x1D);
    } else {
        func_1356E0(p, 0x1F);
    }
}
