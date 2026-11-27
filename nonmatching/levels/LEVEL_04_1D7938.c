/* USA LEVEL_04:1D7938, 240-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 240 bytes: 2 differing words; first difference +0xB4. No matching credit.
 * Remaining issue: improved 32 -> 2, length now 240 B: the kept andi 0xFF comes from an int
 * inline Near() tested (Near(s) & 0xFF) != 0; the ori v1,sp,4 and stack-slot order from an
 * inline MaxPtr(&zero, &val) helper on separate float locals. Left: one store/load order (retail
 * stores the zero slot after the pos.z store and before re-reading m->step; ours reads the step
 * first; zero-first order hoists the zero store above the pos.z add instead, 3 w)
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_04:0x1D7938 -- state handler: on the first frame registers the record, then moves the object by the record's step and decays the step toward zero. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    void *w0;
    float step;
    float dx;
    float dz;
} Mover;

typedef struct {
    char pad0[0x30];
    Vec3 pos;
    char pad3C[9];
    unsigned char b45;
    char pad46[0x12];
    Mover *mover;
} Obj;

extern char D_00243978[];

extern void func_1D4D88(void *a, Obj *o, void *b, int c);
extern float fabsf(float x);

static __inline__ int Near(float a)
{
    return fabsf(a) <= 9.999999747378752e-06f;
}

static __inline__ float *MaxPtr(float *z, float *v)
{
    if (*v < *z)
        return z;
    return v;
}

void func_1D7938(Obj *o)
{
    Mover *m;
    float val;
    float s;
    float zero;
    Vec3 *pp;

    m = o->mover;
    if (o->b45 == 1) {
        func_1D4D88(m->w0, o, D_00243978, 0);
        o->b45 = 0;
    }
    s = m->step;
    if ((Near(s) & 0xFF) != 0) {
        return;
    }
    pp = &o->pos;
    o->pos.x = o->pos.x + m->dx * s;
    pp->z = pp->z + m->dz * s;
    val = m->step - 0.005555556155741215f;
    zero = 0.0f;
    m->step = *MaxPtr(&zero, &val);
}
