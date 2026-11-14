/* USA LEVEL_15.REL:0x10D440, 128-byte candidate (14 November 2026).
 * Measured pinned: 12 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad0[0x3C];
    float v3C[3];
    float v48[3];
    float v54[3];
    char pad60[0x224 - 0x60];
    float t224[3];
    char pad230[0x23C - 0x230];
    float s23C[3];
} Obj;

extern char D_002F3D98[];
extern void func_10D358(void);
extern void func_0E5BB8(float *cur, float *state, float *tgt, float a, float b);
extern void func_0EB9C8(void *a0, void *a1, void *a2, void *a3, void *a4);

void func_10D440(Obj *o)
{
    char *g = D_002F3D98;
    float *p = o->v54;

    func_10D358();
    func_0E5BB8(p, o->s23C, o->t224, 0.1666666716337204f, 0.8464816808700562f);
    func_0EB9C8(o->v3C, o->v48, p, g + 0xC, o->v3C);
}
