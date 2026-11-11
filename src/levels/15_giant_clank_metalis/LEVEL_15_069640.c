/* LEVEL_15:0x069640 -- placement copy of LEVEL_01_083CB0.c: when the probe succeeds, pulls the box corners apart by 0.03125 and forwards them. */
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

extern int func_0693E0(struct V3 *a, struct V3 *b, void *w);
extern void func_0DF0C8(void *a, void *b, void *c, void *d, struct V3 *lo, struct V3 *hi);

void func_069640(void *a0, void *a1, void *a2)
{
    struct Box bx;

    if (func_0693E0(&bx.lo, &bx.hi, a2) == 0) {
        return;
    }
    bx.lo.x = bx.lo.x - 0.03125f;
    bx.lo.y = bx.lo.y - 0.03125f;
    bx.lo.z = bx.lo.z - 0.03125f;
    bx.hi.x = bx.hi.x + 0.03125f;
    bx.hi.y = bx.hi.y + 0.03125f;
    bx.hi.z = bx.hi.z + 0.03125f;
    func_0DF0C8(a0, a1, a0, a1, &bx.lo, &bx.hi);
}
