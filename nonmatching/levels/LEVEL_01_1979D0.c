/* USA LEVEL_01.REL:0x1979D0, 388-byte candidate (21 November 2026).
 * Measured pinned: 12 differing words; first difference at 0x10.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float pos[3];
    float a;
    float b;
    float c;
    float d;
    char *e;
} Burst;

typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Preset;

typedef struct {
    char pad_00[0x10];
    float vel[3];
    char pad_1C[0x14];
    float pos[3];
} Obj;

extern int D_002088FC;
extern int D_00208900;
extern char D_00224CB0[];
extern char D_00224CD8[];

extern void func_0EF930(unsigned int index, float *pos);
extern Preset *func_024238(int id);
extern void func_0809D0(Obj *o, Preset *p, int a2, int a3, int t0, int t1, int t2, int t3,
                        float f12, float f13, float f14, float f15);
extern void func_1E1DE8(int a, int b, Burst *s, int c, float f0, float f1);

static __inline__ void AddScaled(float *d, float *p, float *v, float k)
{
    d[0] = p[0] + v[0] * k;
    d[1] = p[1] + v[1] * k;
    d[2] = p[2] + v[2] * k;
}

void func_1979D0(Obj *o)
{
    Burst s;
    Preset *pre;
    float zf;

    AddScaled(s.pos, o->pos, o->vel, 0.20000000298023224f);
    s.e = D_00224CB0;
    s.a = 0.05000000074505806f;
    s.d = 0.5f;
    s.b = 0.30000001192092896f;
    s.c = 0.20000000298023224f;
    func_0EF930(0x1D, s.pos);
    pre = func_024238(2);
    if (pre) {
        func_0809D0(o, pre, 0, 0, 0, 0, 0, 1, pre->f_14, pre->f_18, pre->f_1C, pre->f_20);
    }
    zf = 0.0f;
    func_1E1DE8(D_002088FC, D_00208900, &s, 8, zf, zf);
    s.b = 0.30000001192092896f;
    s.c = 0.20000000298023224f;
    s.d = zf;
    s.e = D_00224CD8;
    s.a = 0.10000000149011612f;
    func_1E1DE8(D_002088FC, D_00208900, &s, 8, zf, zf);
}
