/* USA LEVEL_02:1B7D68, 200-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 200 bytes: 1 differing words; first difference +0x38. No matching credit.
 * Remaining issue: one word: retail zero-extends the unsigned char predicate (andi v0,a0,0xFF)
 * before the beqz, ours copies it (daddu v0,a0). Fixed here: predicate as the LEVEL_01_0639B8
 * form (long long r = 0; unsigned m = flags & 0x20; int b = m == 0; r = b;), position copy
 * through an inline Copy4(pos, t->pos), shared return 0 (was 34 words). Combine drops the andi
 * because it knows r is 0/1; uchar/int r, caller-side ok local, != 0 test, casts all unchanged -
 * possibly the 64-bit-host nonzero_bits tracking of DImode pseudos
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_02:0x1B7D68 -- reports whether the object lies within 25 units (squared distance 625) of its linked target on the ground plane, when the target exists, is not flagged and the helper accepts its position. */
typedef struct {
    char pad_00[0x30];
    float pos[4];
    char pad_40[0x64 - 0x40];
    unsigned int flags;
} Target;

typedef struct { char pad_00[0x54]; Target **target; } Link;
typedef struct { char pad_00[0x2C]; int handle; char pad_30[0x60 - 0x30]; Link *link; } Rec;
typedef struct { char pad_00[0x30]; float x; char pad_34[4]; float z; char pad_3C[0x54 - 0x3C]; Rec *rec; } Obj;

extern int func_08B060(int handle, float *pos);

static __inline__ unsigned char Active(Target *t)
{
    long long r = 0;
    int b;
    unsigned int m;

    if (t != 0) {
        m = t->flags & 0x20;
        b = m == 0;
        r = b;
    }
    return r;
}

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

int func_1B7D68(Obj *o)
{
    Rec *r = o->rec;
    Target *t = *r->link->target;
    float pos[4];
    float dx;
    float dz;

    if (Active(t)) {
        Copy4(pos, t->pos);
        if (func_08B060(r->handle, pos)) {
            dx = o->x - pos[0];
            dz = o->z - pos[2];
            if (dx * dx + dz * dz <= 625.0f)
                return 1;
        }
    }
    return 0;
}
