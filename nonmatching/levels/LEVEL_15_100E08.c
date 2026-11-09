/* LEVEL_15.REL:0x100E08: reviewed 340-byte candidate, held for ABI review.
 * For every record whose lookup succeeds and has a valid slot, spawns an
 * effect at the hit position plus a random offset, then finishes with a final
 * update call.
 * gnu-ee-trial C with gnu-ee-trial links 340/340 bytes and is byte-exact at
 * this and 1 other USA placement, but the prototypes disagree.
 * It declares func_114BB0 returning void with (int, pointer), but the accepted
 * LEVEL_15_114BB0.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Rec100E08 {
    char pad_00[0x118];
};
struct G100E08 {
    char pad_00[0xE4];
    struct Rec100E08 *recs_E4;
    int n_E8;
};
struct Tgt100E08 {
    char pad_00[0x24];
    float pos_24[3];
};
struct Obj100E08 {
    char pad_00[0x60];
    float a_60[3];
    char pad_6C[0x24];
    float b_90[3];
    char pad_9C[0x18C];
    float f_228;
};

extern struct G100E08 D_002ED088;
extern int D_0016FAB0[];
extern char D_002ED058[];

void func_0EC3A0(float *buf, float *b, float *a);
struct Tgt100E08 *func_11D5D0(struct Rec100E08 *r, float *buf, int t, float f);
void func_0E6A68(float *out, float lo, float hi);
void func_114BB0(int a, float *c);
void func_12B788(char *g, float *x);

static __inline__ void vadd(float *d, float *a, float *b)
{
    d[0] = a[0] + b[0];
    d[1] = a[1] + b[1];
    d[2] = a[2] + b[2];
}

void func_100E08(struct Obj100E08 *o)
{
    float buf[12];
    float t[3];
    float c[3];
    float r;
    float k;
    struct Tgt100E08 *tg;
    int i;
    int n;

    r = o->f_228;
    func_0EC3A0(buf, o->b_90, o->a_60);
    k = r * r * 5.0f * 5.0f;
    n = D_002ED088.n_E8;
    for (i = 0; i < n; i++) {
        tg = func_11D5D0(&D_002ED088.recs_E4[i], buf, D_0016FAB0[i], r);
        if (tg != 0) {
            if (D_0016FAB0[i] != -1) {
                func_0E6A68(t, 0.0f, k);
                vadd(c, tg->pos_24, t);
                func_114BB0(0, c);
            }
        }
    }
    func_12B788(D_002ED058, &buf[9]);
}
