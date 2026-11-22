/* USA LEVEL_01.REL:0x1CDDB8 (21 November 2026): exact linked bytes under gnu-
 * ee-trial, held.
 * Its form stays out of the accepted set because a placement disagrees with an
 * accepted prototype.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

struct Head;

typedef struct {
    float f00;
    float f04;
    float f08;
    char pad0C[4];
    float f10;
    float f14;
    float f18;
} Obj;

typedef struct {
    char pad00[0x30];
    float x;
    float y;
    float z;
} Body;

extern float D_0022A500;
extern void func_013878(struct Head *h, float *vx, float *vz, float *target, float *k);
extern int func_013F00(Vec4 *o, Vec4 *v, int a2, int a3, float dy);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

int func_1CDDB8(Obj *o, Body *b, float dy)
{
    Vec4 dir;
    Vec4 pos;
    int r;

    dir.x = o->f00 * o->f18;
    dir.y = 0.0f;
    dir.z = o->f08 * o->f18;
    func_013878((struct Head *)b, &o->f10, &o->f14, &dir.x, &D_0022A500);
    Copy3(&pos.x, &b->x);
    pos.y = pos.y + dy;
    pos.w = dy;
    r = func_013F00(&pos, (Vec4 *)o, 0x38, 0, 0.026666671f);
    pos.y = pos.y - dy;
    Copy3(&b->x, &pos.x);
    if (b->y < -10.0f) {
        return 1;
    }
    return r;
}
