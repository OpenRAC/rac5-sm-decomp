/* USA LEVEL_01:0548B8, 284-byte candidate; measured 26 November 2026.
 * Profile gnu-ee-trial, assembler gnu-ee-trial; options: default.
 * Compiled 280 bytes: 24 differing words; first difference +0xBC. No matching credit.
 * Remaining issue: only the sqrt.s padding is left: rewritten with inline pointer helpers Sub3 /
 * Dot3 / Scale3 (s * a[i]) / Copy4 on stack vectors d and p, every word before +0xBC and every
 * word after the shift matches; retail has ONE nop between the add.s producing f12 and the
 * inline sqrt.s, gnu-ee-trial emits none (280 B), gnu-ee-trial-divpad two (288 B). Same rule as
 * LEVEL_01:1E5170 and LEVEL_15:1032F0
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_01:0x0548B8 -- measures the off-normal offset to the target and latches the target position. */
struct V4 {
    float x, y, z, w;
};
struct Tgt {
    char pad[0x30];
    struct V4 v;
};
struct Obj {
    char pad0[0x2F4];
    struct V4 n;
    char pad1[0x59C - 0x304];
    struct Tgt *tgt;
    char pad2[0xC4C - 0x5A0];
    struct V4 pos;
    char pad3[0xC70 - 0xC5C];
    float dist;
};
extern float sqrtf(float x);

static __inline__ void Sub3(float *r, float *a, float *b)
{
    r[0] = a[0] - b[0];
    r[1] = a[1] - b[1];
    r[2] = a[2] - b[2];
}

static __inline__ float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

static __inline__ void Scale3(float *r, float *a, float s)
{
    r[0] = s * a[0];
    r[1] = s * a[1];
    r[2] = s * a[2];
}

static __inline__ void Copy4(struct V4 *d, struct V4 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
    d->w = s->w;
}

void func_0548B8(struct Obj *o)
{
    float d[4];
    float p[4];

    Sub3(d, &o->tgt->v.x, &o->pos.x);
    Scale3(p, &o->n.x, Dot3(d, &o->n.x));
    Sub3(d, d, p);
    o->dist = sqrtf(Dot3(d, d));
    Copy4(&o->pos, &o->tgt->v);
}
