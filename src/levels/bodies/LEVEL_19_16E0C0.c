/* LEVEL_19:0x16E0C0 -- placement copy of LEVEL_16_16D208.c: searches nearby slots for a resource that fails a check against another object. */
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
extern int func_037638(Obj *o);
extern int func_0212B0(Obj *o, unsigned slot);
extern int func_022220(unsigned slot, unsigned idx);
extern int func_1133F0(int h);
extern int func_0222A0(unsigned slot, int h, int arg);

static inline float Dist2(V3 *a, V3 *b)
{
    float x = b->x - a->x;
    float y = b->y - a->y;
    float z = b->z - a->z;
    return x * x + y * y + z * z;
}

int func_16E0C0(Obj *a, Obj *b)
{

    unsigned s;
    unsigned i;
    int h;

    if (!b->active)
        return 0;
    if (func_037638(b))
        return 0;

    if (9.0f <= Dist2(&a->pos, &b->pos))
        return 0;
    for (s = 1; s < 16; s++) {
        if (!func_0212B0(b, s))
            continue;
        for (i = 0; i < 3; i++) {
            h = func_022220(s, i);
            if (h && func_1133F0(h)) {
                if (!func_0222A0(s, h, b->arg))
                    return 1;
            }
        }
    }
    return 0;
}
