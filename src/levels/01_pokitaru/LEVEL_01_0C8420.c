/* LEVEL_01:0x0C8420 -- applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_00200C0C;
extern int D_00200C14;
extern void func_1356E0(int *p, int a1);

void func_0C8420(int *p)
{
    if (D_00200C0C == 1) {
        func_1356E0(p, 0x1D);
    } else {
        D_00200C14 = 0x12;
        func_1356E0(p, 0x13);
    }
}
