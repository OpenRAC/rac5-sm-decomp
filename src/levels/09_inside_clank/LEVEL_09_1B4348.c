/* LEVEL_09:0x1B4348 -- placement copy of LEVEL_08_20A378.c: placement copy of LEVEL_01_1CDDB8.c: steers the object's heading toward its scaled direction, then moves the body by the object's own vector with collision (lifted by the given height) and returns the collision result, or 1 when the body ends up below -10. */
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

extern float D_00211C40;
extern void func_013878(struct Head *h, float *vx, float *vz, float *target, float *k);
extern int func_0143C8(Vec4 *o, Vec4 *v, int a2, int a3, float dy);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

int func_1B4348(Obj *o, Body *b, float dy)
{
    Vec4 dir;
    Vec4 pos;
    int r;

    dir.x = o->f00 * o->f18;
    dir.y = 0.0f;
    dir.z = o->f08 * o->f18;
    func_013878((struct Head *)b, &o->f10, &o->f14, &dir.x, &D_00211C40);
    Copy3(&pos.x, &b->x);
    pos.y = pos.y + dy;
    pos.w = dy;
    r = func_0143C8(&pos, (Vec4 *)o, 0x38, 0, 0.026666671f);
    pos.y = pos.y - dy;
    Copy3(&b->x, &pos.x);
    if (b->y < -10.0f) {
        return 1;
    }
    return r;
}
