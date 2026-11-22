/* LEVEL_17:0x14EC40 -- takes the other object's scaled vector, crosses it with the global axis into the record, normalises the result when it is long enough, then clears the record's timer, marks the object, frees the record's handle and notifies the other object. */
typedef struct { float x, y, z; } V3;

typedef struct {
    int h0;
    char pad4[4];
    V3 v;
    V3 w;
    char pad20[0x2C - 0x20];
    int w2C;
} Rec;

typedef struct {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0x58 - 0x46];
    Rec *rec;
} Obj;

typedef struct {
    char pad0[0x1B4];
    V3 s;
} Other;

extern V3 D_001C01C8;
extern float sqrtf(float x);
extern void func_037A20(int h);
extern void func_116C50(Other *p);

void func_14EC40(Obj *o, Other *p)
{
    Rec *r;
    V3 *sp;
    V3 *up;
    V3 *wp;
    V3 *gp;
    float len2;
    float inv;

    r = o->rec;
    if (p != 0) {
        gp = &D_001C01C8;
        sp = &p->s;
        up = &r->v;
        wp = &r->w;
        r->v.x = p->s.x * 30.0f;
        up->y = sp->y * 30.0f;
        up->z = sp->z * 30.0f;
        r->w.x = gp->y * up->z - gp->z * up->y;
        wp->y = gp->z * r->v.x - D_001C01C8.x * up->z;
        wp->z = D_001C01C8.x * up->y - gp->y * r->v.x;
        len2 = r->w.x * r->w.x + wp->y * wp->y + wp->z * wp->z;
        if (!(len2 < 2.384185791015625e-07f)) {
            inv = 1.0f / sqrtf(len2);
            r->w.x = r->w.x * inv;
            wp->y = wp->y * inv;
            wp->z = wp->z * inv;
        }
        r->w2C = 0;
        o->b45 = 4;
        func_037A20(r->h0);
        r->h0 = 0;
        func_116C50(p);
    }
}
