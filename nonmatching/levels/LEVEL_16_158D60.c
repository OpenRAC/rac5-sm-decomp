/* USA LEVEL_16:158D60, 208-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: -fno-schedule-insns.
 * Compiled 208 bytes: 18 differing words; first difference +0x20. No matching credit.
 * Remaining issue: register/FP numbering (from 26 words): inline Scale3/AddScaled3 helpers on
 * the stack vector reproduce retail store-after-each-product order exactly with sched1 on, but
 * then the o->v10 pointer is copied into a2 for the call (212 B, 47 words); with -fno-schedule-
 * insns integer registers and size match and only the FP register numbering plus the hoisted
 * v10[0] load differ; pointer/local variants tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_16:0x158D60 -- blends two vector fields by owner weights, passes the result on and calls a setter with global data. */
typedef struct {
    float w0;
    float w4;
} Wt;
typedef struct {
    char pad0[0x10];
    float v10[3];
    float padv;
    float v20[3];
    char pad2C[0x28];
    Wt *p54;
} Obj;
typedef struct {
    char pad0[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} G;
extern G *D_001BDC0C;
extern void func_038230(int x, float *v, float *w);
extern void func_073518(Obj *o, G *g, float a, float b, float c, float d, int e, int f, int g2, int h, int i, int j);

static __inline__ void Scale3(float *d, float s, float *a)
{
    d[0] = s * a[0];
    d[1] = s * a[1];
    d[2] = s * a[2];
}

static __inline__ void AddScaled3(float *d, float *a, float s)
{
    d[0] += a[0] * s;
    d[1] += a[1] * s;
    d[2] += a[2] * s;
}

void func_158D60(Obj *o, int x)
{
    float v[3];
    Wt *p = o->p54;

    Scale3(v, p->w0, o->v20);
    AddScaled3(v, o->v10, p->w4);
    func_038230(x, v, o->v10);
    if (D_001BDC0C != 0) {
        func_073518(o, D_001BDC0C, D_001BDC0C->f14, D_001BDC0C->f18, D_001BDC0C->f1C, D_001BDC0C->f20, 0, 0, 0, 0, 0, 1);
    }
}
