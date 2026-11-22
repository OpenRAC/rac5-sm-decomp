/* USA LEVEL_01.REL:0x0559B8, 248-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 24 differing words; first difference at 0x24.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x34];
    float f34;
} Surface;

typedef struct {
    float n[4];
    Surface *surf;
    int type;
} Hit;

typedef struct {
    char pad000[0x30];
    float pos[4];
    char pad040[0x2F4 - 0x40];
    float vel[3];
    char pad300[4];
    float f304[4];
    char pad314[0x334 - 0x314];
    Surface *w334;
    Surface *w338;
    float f33C;
} Obj;

extern int func_055730(float *pos, float *vel, float *a, Hit *h, int *c, float f0, float f1, float f2);
extern void func_054C60(Obj *o, int hit, int c);

void func_0559B8(Obj *o)
{
    float a[4];
    Hit h;
    int c;
    int hit;
    float *pos;

    if (o->w334 != 0) {
        o->w338 = o->w334;
    }
    o->w334 = 0;
    pos = o->pos;
    hit = func_055730(pos, o->vel, a, &h, &c, 0.5f, 1.0f, 3.0f);
    if (hit == 0) {
        if (h.type == 2) {
            o->w334 = h.surf;
            o->f33C = h.surf->f34;
        }
    }
    func_054C60(o, hit, c);
    if (hit == 0) {
        o->pos[0] = a[0];
        pos[1] = a[1];
        pos[2] = a[2];
        pos[3] = a[3];
        o->f304[0] = h.n[0];
        o->f304[1] = h.n[1];
        o->f304[2] = h.n[2];
        o->f304[3] = 0;
    }
}
