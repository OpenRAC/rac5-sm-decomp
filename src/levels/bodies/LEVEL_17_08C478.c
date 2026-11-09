/* LEVEL_17:0x08C478 -- placement copy of LEVEL_16_08C650.c: for each enabled pool, takes a 32-byte record from it, fills in the position, retuned flags and parameters, and registers it with the callback. */

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
    int w_18;
    int w_1C;
} Rec;

extern unsigned int D_00197A44;
extern unsigned int D_00245488[2];
extern Rec *D_00245490[2];

extern void func_08C438(void);
extern void func_08AA98(void (*cb)(void), Rec *rec, unsigned int flags, unsigned int slot);

static __inline__ Rec *PoolTake(unsigned int i)
{
    Rec *r;

    if (D_00245488[i] < 0x20) {
        return 0;
    }
    D_00245488[i] -= 0x20;
    r = D_00245490[i];
    D_00245490[i] = r + 1;
    return r;
}

void func_08C478(Vec3 *pos, unsigned int flags, int a, int b, float f0, float f1)
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
        flags &= ~3u;
        rec->flags = flags;
        rec->f_10 = f0;
        rec->f_14 = f1;
        rec->w_18 = a;
        rec->w_1C = b;
        func_08AA98(func_08C438, rec, flags, i);
    }
}
