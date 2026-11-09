/* LEVEL_04:0x1F4C80 -- sets a unit float and forwards an optional global to a helper. */
extern char D_00222854[];
extern void func_083E30(void *a0, void *a1, int a2, int a3, int t0, int t1, int t2, int t3, float f12, float f13, float f14, float f15);

struct Gx {
    char pad0[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
};

void func_1F4C80(float *a0, void *a1, unsigned char *a2)
{
    unsigned int key;
    struct Gx *g;

    if (a2 == 0) {
        return;
    }
    key = *(unsigned int *)(*(char **)(a2 + 0x40) + 0x24);
    if (key != 0xCF5F16FF) {
        if (key != 0x5A59F5CB) {
            return;
        }
    }
    *a0 = 1.0f;
    g = *(struct Gx **)D_00222854;
    if (g == 0) {
        return;
    }
    func_083E30(a1, g, 0, 0, 0, 0, 0, 1, g->f14, g->f18, g->f1C, g->f20);
}
