/* LEVEL_07:0x0778F8 -- placement copy of LEVEL_01_075708.c: initializes a link record with a direction and normalizes it. */
typedef struct { float x, y, z; } V3;
typedef struct { char pad0[0x14]; unsigned char on; } Y;
typedef struct { char pad0[0x30]; V3 pos; } Z;
typedef struct {
    char pad0[0x14];
    Y *y;
    V3 d;
    V3 p;
    V3 q;
    Z *z;
    int w40;
    char pad44[4];
    char sub48[0x5C - 0x48];
    void *self;
} O;
extern int D_0020A3DC;
extern int D_0020A3D4;
extern float sqrtf(float x);
extern void func_099458(void *a, int b, int c);
extern void func_07A098(O *o);
extern void func_07A148(void *a);

void func_0778F8(O *o, Y *y, V3 *p, V3 *q, Z *z)
{
    float len;
    float inv;
    V3 *dp;
    V3 *zp;
    V3 *dd;
    V3 *qp;

    func_099458(o, D_0020A3DC, 1);
    func_099458(o->sub48, D_0020A3D4, 1);
    o->self = o;
    o->y = y;
    o->w40 = 0;
    o->z = z;
    dp = &o->p;
    zp = &z->pos;
    dd = &o->d;
    o->p.x = p->x;
    dp->y = p->y;
    dp->z = p->z;
    o->d.x = z->pos.x - p->x;
    dd->y = zp->y - p->y;
    dd->z = zp->z - p->z;
    len = o->d.x * o->d.x + dd->y * dd->y + dd->z * dd->z;
    if (!(len < 2.384185791015625e-07f)) {
        len = sqrtf(len);
        inv = 1.0f / len;
        o->d.x = o->d.x * inv;
        dd->y = dd->y * inv;
        dd->z = dd->z * inv;
    }
    qp = &o->q;
    o->q.x = q->x;
    qp->y = q->y;
    qp->z = q->z;
    func_07A098(o);
    if (y->on)
        func_07A148(o->sub48);
}
