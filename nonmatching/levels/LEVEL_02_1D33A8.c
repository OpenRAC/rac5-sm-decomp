/* LEVEL_02.REL:0x1D33A8: reviewed 536-byte candidate, held for ABI review.
 * Returns a global when the active record is flagged and in state one; then
 * draws four probe segments.
 * pinned C with gnu-ee-trial links 536/536 bytes and is byte-exact at this and
 * 3 other USA placements, but the prototypes disagree.
 * It declares func_083968 returning void with (pointer, pointer, int), but the
 * accepted LEVEL_02_083968.c defines it returning void with (long long, long
 * long).
 * It declares func_040310 returning pointer with no arguments, but the
 * accepted LEVEL_02_040310.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Act { char pad0[0x46]; unsigned char b46; char pad47[0x1D]; unsigned int flags; } Act;
typedef struct Sup { char pad0[0x46]; unsigned char b46; char pad47[0x11]; struct Hw *p58; } Sup;
typedef struct Hw { char pad0[4]; unsigned short h[4]; } Hw;
typedef struct Ent { float x, y, z; char padC[2]; unsigned short hE; } Ent;
typedef struct Mat { float r[4][4]; } Mat;
typedef struct Veh { float m[16]; } Veh;

extern Act *D_0021DE30;
extern int D_003B04AC;
extern char D_003B02B8[];
extern char D_0021DE20[];
extern Ent D_0023FE20[];
typedef struct Gst { char pad0[0x1B4]; float v[3]; } Gst;
extern Gst D_0024C650;

extern void func_083968(void *o, float *buf, int n);
extern float *func_040310(void);
extern void func_0711F0(void *a, float *b, float *c, int d);
extern void func_1D35C0(void *o);
extern void func_071308(void *a);
extern void func_0792E8(void *a, Mat *m, float x, float y, float z, int h, int g, int t);

int func_1D33A8(void)
{
    Act *a;

    a = D_0021DE30;
    if (!(a->flags & 1) || a->b46 != 1)
        return 0;
    return D_003B04AC;
}

void func_1D33E0(Sup *o)
{
    Hw *hw;
    float *v;
    float *q;
    float *dv;
    float *r0;
    Gst *g;
    Ent *e;
    unsigned short *hp;
    float p[4];
    float p1[3];
    Mat m;
    unsigned int i;

    hw = o->p58;
    func_083968(o, p, 7);
    g = &D_0024C650;
    v = func_040310();
    q = v + 8;
    p1[0] = g->v[0] + q[0] * 0.16666667f;
    dv = g->v;
    p1[1] = dv[1] + q[1] * 0.16666667f;
    p1[2] = dv[2] + q[2] * 0.16666667f;
    func_0711F0(D_003B02B8, p, p1, o->b46 == 1);
    func_1D35C0(o);
    func_071308(D_003B02B8);
    if (o->b46 == 1) {
        r0 = v + 4;
        m.r[1][0] = v[8];
        m.r[1][1] = q[1];
        m.r[1][2] = q[2];
        m.r[1][3] = q[3];
        m.r[0][0] = v[4];
        m.r[0][1] = r0[1];
        m.r[0][2] = r0[2];
        m.r[0][3] = r0[3];
        m.r[2][0] = v[0];
        m.r[2][1] = v[1];
        m.r[2][2] = v[2];
        m.r[2][3] = v[3];
        m.r[3][0] = p[0];
        m.r[3][1] = p[1];
        m.r[3][2] = p[2];
        m.r[3][3] = 1.0f;
        e = D_0023FE20;
        hp = hw->h;
        i = 0;
        do {
            func_0792E8(D_0021DE20, &m, e->x, e->y, e->z, e->hE, *hp, 0);
            i++;
            e++;
            hp++;
        } while (i < 4);
    }
}
