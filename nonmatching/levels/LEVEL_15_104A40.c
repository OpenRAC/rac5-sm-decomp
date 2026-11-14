/* USA LEVEL_15.REL:0x104A40, 120-byte candidate (14 November 2026).
 * Measured pinned: 3 differing words; first difference at 0x4C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { float x, y, z; } Vec3;
typedef struct {
    char pad00[0x3C];
    int f_3C;
    char pad40[0x48 - 0x40];
    int f_48;
    char pad4C[0x54 - 0x4C];
    Vec3 f_54;
    char pad60[0x254 - 0x60];
    Vec3 f_254;
    char pad260[0x274 - 0x260];
    float f_274;
} Obj;
extern float D_002ED188;
extern char D_002F3D98[];
extern void func_0E5BB8(Vec3 *cur, float *state, Vec3 *tgt, float a, float b);
extern void func_0EB9C8(void *a0, void *a1, void *a2, void *a3, void *a4);
void func_104A40(Obj *o)
{
    Vec3 *p = &o->f_54;
    char *g = D_002F3D98;
    func_0E5BB8(p, &o->f_274, &o->f_254, 0.033333335f, D_002ED188);
    func_0EB9C8(&o->f_3C, &o->f_48, p, g + 0xC, &o->f_3C);
}
