/* LEVEL_18:0x171F00 -- placement copy of LEVEL_16_16D208.c: searches nearby slots for a resource that fails a check against another object. */
typedef struct {
    float x, y, z;
} V3;
typedef struct {
    char pad0[0x30];
    V3 pos;
    char pad3C[0xF4 - 0x3C];
    int active;
    int arg;
} Obj;
extern int func_036BE8(Obj *o);
extern int func_020CB8(Obj *o, unsigned slot);
extern int func_021C28(unsigned slot, unsigned idx);
extern int func_111A00(int h);
extern int func_021CA8(unsigned slot, int h, int arg);

static inline float Dist2(V3 *a, V3 *b)
{
    float x = b->x - a->x;
    float y = b->y - a->y;
    float z = b->z - a->z;
    return x * x + y * y + z * z;
}

int func_171F00(Obj *a, Obj *b)
{

    unsigned s;
    unsigned i;
    int h;

    if (!b->active)
        return 0;
    if (func_036BE8(b))
        return 0;

    if (9.0f <= Dist2(&a->pos, &b->pos))
        return 0;
    for (s = 1; s < 16; s++) {
        if (!func_020CB8(b, s))
            continue;
        for (i = 0; i < 3; i++) {
            h = func_021C28(s, i);
            if (h && func_111A00(h)) {
                if (!func_021CA8(s, h, b->arg))
                    return 1;
            }
        }
    }
    return 0;
}
