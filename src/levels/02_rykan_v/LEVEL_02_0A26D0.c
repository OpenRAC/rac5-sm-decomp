/* LEVEL_02:0x0A26D0 -- placement copy of LEVEL_01_09C000.c: for each enabled pool, takes a 40-byte record from it, fills in the position, retuned flags, the four floats and two words, and registers it with the callback. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    Vec3 pos;
    unsigned int flags;
    float f_10;
    float f_14;
    float f_18;
    float f_1C;
    int w_20;
    int w_24;
} Rec;

extern unsigned int D_0020B434;
extern unsigned int D_002B3B40[2];
extern Rec *D_002B3B48[2];

extern void func_0A2688(void);
extern void func_09FBA8(void (*cb)(void), Rec *rec, unsigned int flags, unsigned int slot);

static __inline__ Rec *PoolTake(unsigned int i)
{
    Rec *r;

    if (D_002B3B40[i] < 0x28) {
        return 0;
    }
    D_002B3B40[i] -= 0x28;
    r = D_002B3B48[i];
    D_002B3B48[i] = r + 1;
    return r;
}

void func_0A26D0(Vec3 *pos, unsigned int flags, int a, int b, float f18, float f1C, float f10, float f14)
{
    unsigned int i;
    unsigned int bit;
    Rec *rec;

    for (i = 0; i < 1; i++) {
        bit = 1 << i;
        if ((D_0020B434 & bit) == 0) {
            continue;
        }
        rec = PoolTake(i);
        if (rec == 0) {
            return;
        }
        rec->pos = *pos;
        flags = (flags & ~0x3Cu) | 4;
        flags = (flags & ~3u) | 1;
        rec->f_10 = f10;
        rec->f_14 = f14;
        rec->flags = flags;
        rec->f_18 = f18;
        rec->f_1C = f1C;
        rec->w_20 = a;
        rec->w_24 = b;
        func_09FBA8(func_0A2688, rec, flags, i);
    }
}
