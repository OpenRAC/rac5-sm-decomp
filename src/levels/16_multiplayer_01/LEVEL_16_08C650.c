/* LEVEL_16:0x08C650 -- for each enabled pool, takes a 32-byte record from it, fills in the position, retuned flags and parameters, and registers it with the callback. */

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

extern unsigned int D_001A4444;
extern unsigned int D_00254188[2];
extern Rec *D_00254190[2];

extern void func_08C610(void);
extern void func_08A058(void (*cb)(void), Rec *rec, unsigned int flags, unsigned int slot);

static __inline__ Rec *PoolTake(unsigned int i)
{
    Rec *r;

    if (D_00254188[i] < 0x20) {
        return 0;
    }
    D_00254188[i] -= 0x20;
    r = D_00254190[i];
    D_00254190[i] = r + 1;
    return r;
}

void func_08C650(Vec3 *pos, unsigned int flags, int a, int b, float f0, float f1)
{
    unsigned int i;
    unsigned int bit;
    Rec *rec;

    for (i = 0; i < 2; i++) {
        bit = 1 << i;
        if ((D_001A4444 & bit) == 0) {
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
        func_08A058(func_08C610, rec, flags, i);
    }
}
