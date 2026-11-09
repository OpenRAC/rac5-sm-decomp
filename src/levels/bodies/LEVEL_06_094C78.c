/* LEVEL_06:0x094C78 -- placement copy of LEVEL_01_09B350.c: takes a 32-byte record from a per-slot pool for each enabled slot, fills it from the arguments and hands it to a helper. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    Vec3 pos_00;
    unsigned int flags_0C;
    float f_10;
    float f_14;
    int w_18;
    int w_1C;
} Rec;

extern unsigned int D_001E5374;
extern unsigned int D_002893C0[];
extern Rec *D_002893C8[];

extern void func_094C38(void);
extern void func_0921E8(void (*fn)(void), Rec *r, unsigned int flags, unsigned int i);

static __inline__ Rec *allocRec(unsigned int i)
{
    Rec *r;

    if (D_002893C0[i] < 0x20) {
        return 0;
    }
    D_002893C0[i] -= 0x20;
    r = D_002893C8[i];
    D_002893C8[i] = r + 1;
    return r;
}

void func_094C78(Vec3 *pos, unsigned int flags, int a, int b, float f1, float f2)
{
    unsigned int i;
    Rec *rec;
    unsigned int bits;
    unsigned int bit;

    for (i = 0; i < 1; i++) {
        bits = D_001E5374;
        bit = 1 << i;
        if (bits & bit) {
            rec = allocRec(i);
            if (rec == 0) {
                return;
            }
            rec->pos_00 = *pos;
            flags = (flags & ~0x3C) | 4;
            flags &= ~3;
            rec->flags_0C = flags;
            rec->f_10 = f1;
            rec->f_14 = f2;
            rec->w_18 = a;
            rec->w_1C = b;
            func_0921E8(func_094C38, rec, flags, i);
        }
    }
}
