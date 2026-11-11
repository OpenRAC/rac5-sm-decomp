/* LEVEL_17:0x08D130 -- placement copy of LEVEL_16_08D308.c: for each enabled pool, takes a 40-byte record from it, fills in the position, retuned flags, the four floats and two words, and registers it with the callback. */

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

extern unsigned int D_00197A44;
extern unsigned int D_00245488[2];
extern Rec *D_00245490[2];

extern void func_08D0E8(void);
extern void func_08AA98(void (*cb)(void), Rec *rec, unsigned int flags, unsigned int slot);

static __inline__ Rec *PoolTake(unsigned int i)
{
    Rec *r;

    if (D_00245488[i] < 0x28) {
        return 0;
    }
    D_00245488[i] -= 0x28;
    r = D_00245490[i];
    D_00245490[i] = r + 1;
    return r;
}

void func_08D130(Vec3 *pos, unsigned int flags, int a, int b, float f18, float f1C, float f10, float f14)
{
    unsigned int i;
    unsigned int bit;
    Rec *rec;

    for (i = 0; i < 2; i++) {
        bit = 1 << i;
        if ((D_00197A44 & bit) == 0) {
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
        func_08AA98(func_08D0E8, rec, flags, i);
    }
}
