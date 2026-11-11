/* LEVEL_10:0x09C430 -- placement copy of LEVEL_01_09B350.c: takes a 32-byte record from a per-slot pool for each enabled slot, fills it from the arguments and hands it to a helper. */

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

extern unsigned int D_001FF474;
extern unsigned int D_002A5A40[];
extern Rec *D_002A5A48[];

extern void func_09C3F0(void);
extern void func_0999A0(void (*fn)(void), Rec *r, unsigned int flags, unsigned int i);

static __inline__ Rec *allocRec(unsigned int i)
{
    Rec *r;

    if (D_002A5A40[i] < 0x20) {
        return 0;
    }
    D_002A5A40[i] -= 0x20;
    r = D_002A5A48[i];
    D_002A5A48[i] = r + 1;
    return r;
}

void func_09C430(Vec3 *pos, unsigned int flags, int a, int b, float f1, float f2)
{
    unsigned int i;
    Rec *rec;
    unsigned int bits;
    unsigned int bit;

    for (i = 0; i < 1; i++) {
        bits = D_001FF474;
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
            func_0999A0(func_09C3F0, rec, flags, i);
        }
    }
}
