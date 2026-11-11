/* LEVEL_16:0x066688 -- placement copy of LEVEL_01_075708.c: initializes a link record with a direction and normalizes it. */
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
extern int D_001A3B2C;
extern int D_001A3B24;
extern float sqrtf(float x);
extern void func_088018(void *a, int b, int c);
extern void func_068E28(O *o);
extern void func_068ED8(void *a);

void func_066688(O *o, Y *y, V3 *p, V3 *q, Z *z)
{
    float len;
    float inv;
    V3 *dp;
    V3 *zp;
    V3 *dd;
    V3 *qp;

    func_088018(o, D_001A3B2C, 1);
    func_088018(o->sub48, D_001A3B24, 1);
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
    func_068E28(o);
    if (y->on)
        func_068ED8(o->sub48);
}
