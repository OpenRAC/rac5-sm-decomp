/* LEVEL_19:0x048A48 -- placement copy of LEVEL_17_049018.c: syncs part visibility flags with the main part and places two attached parts. */
typedef struct Vec3 {
    float x, y, z;
} Vec3;

typedef struct Part {
    char pad0[0x10];
    float v[3];
    char pad1[0x4];
    float m[8];
    char pad2[0x64 - 0x40];
    int flags;
} Part;

typedef struct Obj {
    float pos[3];
    char pad0[4];
    float dir[3];
    char pad1[0x2A8 - 0x1C];
    float a[3];
    float b[3];
    char pad2[0x59C - 0x2C0];
    Part *main;
    char pad3[4];
    Part *p5A4;
    Part *p5A8;
    char pad4[0x5B8 - 0x5AC];
    Part *list[6];
    char pad6[8];
    Part *p5D8;
    Part *p5DC;
    Part *p5E0;
    Part *p5E4;
    char pad5[0x960 - 0x5E8];
    unsigned long long fl;
} Obj;

extern int func_037638(Obj *o);
extern int func_021128(Obj *o);
extern int func_05CAA0(Obj *o);
extern void func_105D70(Part *p, float *m, float *v, float *n, float *d);
extern void func_104C00(float *m, Obj *o, void *d);
extern char D_001C45D0[];
extern char D_001C45E0[];

#define SYNC(q) (q)->flags = ((q)->flags & ~0x20) | (((((Obj *)o)->main->flags >> 9) ^ 1) & 1) << 5

void func_048A48(Obj *o)
{
    unsigned i;
    int k;
    float *s2;
    char *s3;
    float t[3];
    float n[3];
    float n2[3];
    Part *q;
    Part *r;
    float *d;

    if (o->main == 0)
        return;
    if (o->p5E0)
        SYNC(o->p5E0);
    if (o->p5D8)
        SYNC(o->p5D8);
    if (o->p5E4)
        SYNC(o->p5E4);
    if (o->p5DC)
        SYNC(o->p5DC);
    for (i = 0; i < 6; i++) {
        if (o->list[i])
            SYNC(o->list[i]);
    }
    if (o->main->flags & 0x200)
        return;
    if (func_037638(o))
        return;
    s3 = 0;
    k = func_021128(o);
    if (k - 1U < 3 || k == 8 || k == 5 || k == 6)
        s3 = D_001C45E0;
    else if (k == 7 || k == 4)
        s3 = D_001C45D0;
    s2 = (o->fl & (1ULL << 49)) ? o->b : o->a;
    if (s3 != 0 && s2 != 0) {
        if (o->p5A4 && !(o->fl & (1ULL << 43)) && !func_05CAA0(o) && !(o->fl & (1ULL << 60))) {
            q = o->p5A4;
            t[0] = -s2[0];
            t[1] = -s2[1];
            t[2] = -s2[2];
            n[0] = -o->pos[0];
            n[1] = -o->pos[1];
            n[2] = -o->pos[2];
            func_105D70(q, q->m, t, n, o->dir);
            q->v[0] = t[0];
            d = q->v;
            d[1] = t[1];
            d[2] = t[2];
            func_104C00(o->p5A4->m + 4, o, s3);
            o->p5A4->m[7] = 1.0f;
        }
    }
    if (s2 != 0) {
        if (o->p5A8 && !(o->fl & (1ULL << 43)) && !func_05CAA0(o) && !(o->fl & (1ULL << 60))) {
            r = o->p5A8;
            t[0] = -s2[0];
            t[1] = -s2[1];
            t[2] = -s2[2];
            n2[0] = -o->pos[0];
            n2[1] = -o->pos[1];
            n2[2] = -o->pos[2];
            func_105D70(r, r->m, t, n2, o->dir);
            r->v[0] = t[0];
            d = r->v;
            d[1] = t[1];
            d[2] = t[2];
            func_104C00(o->p5A8->m + 4, o, D_001C45E0);
            o->p5A8->m[7] = 1.0f;
        }
    }
}
