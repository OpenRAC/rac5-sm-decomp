/* LEVEL_22:0x076320 -- placement copy of LEVEL_01_083CB0.c: when the probe succeeds, pulls the box corners apart by 0.03125 and forwards them. */
struct V3 {
    float x;
    float y;
    float z;
};

struct Box {
    struct V3 lo;
    char pad_0c[4];
    struct V3 hi;
};

extern int func_0760C0(struct V3 *a, struct V3 *b);
extern void func_0F5290(void *a, void *b, void *c, void *d, struct V3 *lo, struct V3 *hi);

void func_076320(void *a0, void *a1)
{
    struct Box bx;

    if (func_0760C0(&bx.lo, &bx.hi) == 0) {
        return;
    }
    bx.lo.x = bx.lo.x - 0.03125f;
    bx.lo.y = bx.lo.y - 0.03125f;
    bx.lo.z = bx.lo.z - 0.03125f;
    bx.hi.x = bx.hi.x + 0.03125f;
    bx.hi.y = bx.hi.y + 0.03125f;
    bx.hi.z = bx.hi.z + 0.03125f;
    func_0F5290(a0, a1, a0, a1, &bx.lo, &bx.hi);
}
