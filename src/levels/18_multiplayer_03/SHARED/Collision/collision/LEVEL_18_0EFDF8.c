/* LEVEL_18:0x0EFDF8 -- placement copy of LEVEL_01_1109A8.c: allocates and fills a small quad mesh record; returns it or frees it and returns null. */
typedef struct V3 { float x, y, z; } V3;
typedef struct Vtx {
    short s0, s2, s4; short pad6; int w8; float fc; int w10; float f14; float f18; int w1c; int w20;
    float f24; float f28; int w2c; float f30; int w34; int w38; int w3c; float f40; float f44; short s48; short s4a;
} Vtx;
typedef struct Mesh {
    int w0; int w4; V3 *quad; Vtx *verts; short *ib; short **ibp; short *idx; int w1c; int w20; int w24;
    V3 c; V3 mn; V3 mx; V3 ext; char pad58[0x10]; int w68;
} Mesh;

extern int D_001B5D34;
extern char D_001CDAD8[];
extern const float D_001CDB00;
extern void *func_0EEBF0(int size, int a, char *name, int line);
extern void func_0F00D8(Mesh *m);

static inline void fill3(V3 *p, float f)
{
    p->x = f;
    p->y = f;
    p->z = f;
}

Mesh *func_0EFDF8(void)
{
    Mesh *m;
    Vtx *v;
    V3 *q;
    float g;
    short *ip;
    int ok;

    if (!D_001B5D34) return 0;
    m = func_0EEBF0(0x6C, 0xD, D_001CDAD8, 0x160);
    if (!m) return 0;
    m->w0 = 4;
    m->w4 = 2;
    m->quad = 0;
    m->verts = 0;
    m->ib = 0;
    m->ibp = 0;
    m->idx = 0;
    m->w68 = 0;
    ok = 0;
    if ((m->quad = func_0EEBF0(0x30, 0xD, D_001CDAD8, 0x179)) &&
        (m->verts = func_0EEBF0(0x98, 0xD, D_001CDAD8, 0x182)) &&
        (m->idx = func_0EEBF0(6, 0xD, D_001CDAD8, 0x18D)) &&
        (m->ibp = func_0EEBF0(4, 0xD, D_001CDAD8, 0x195))) {
        q = m->quad;
        q->x = 25.0f; q->y = 0; q->z = 25.0f;
        q++;
        q->x = 25.0f; q->y = 0; q->z = -25.0f;
        q++;
        q->x = -25.0f; q->y = 0; q->z = -25.0f;
        q++;
        q->x = -25.0f; q->y = 0; q->z = 25.0f;
        g = D_001CDB00;
        v = m->verts;
        v->s0 = 0; v->s2 = 1; v->s4 = 3;
        v->w8 = 0; v->fc = 1.0f; v->w10 = 0; v->f14 = g; v->f18 = 1.0f;
        v->w1c = 0; v->w20 = 0; v->f24 = -25.0f; v->f28 = -0.70710677f; v->w2c = 0;
        v->f30 = -0.70710677f; v->w34 = 0; v->w38 = 0; v->w3c = 0; v->f40 = 1.0f; v->f44 = -25.0f;
        v->s4a = 0; v->s48 = 0;
        v++;
        v[0].s0 = 2; v->s2 = 3; v->s4 = 1;
        v->w8 = 0; v->fc = 1.0f; v->w10 = 0; v->f14 = g; v->f18 = -1.0f;
        v->w1c = 0; v->w20 = 0; v->f24 = -25.0f; v->f28 = 0.70710677f; v->w2c = 0;
        v->f30 = 0.70710677f; v->w34 = 0; v->w38 = 0; v->w3c = 0; v->f40 = -1.0f; v->f44 = -25.0f;
        v->s4a = 0; v->s48 = 0;
        m->ib = m->idx;
        m->idx[0] = 2;
        *m->ibp = m->ib + 1;
        ip = *m->ibp;
        ip[1] = 1;
        ip[0] = 0;
        fill3(&m->mn, -25.0f);
        fill3(&m->mx, 25.0f);
        fill3(&m->ext, 50.0f);
        m->w24 = 1;
        m->w20 = 1;
        m->w1c = 1;
        m->c = m->ext;
        ok = 1;
    }
    if (!ok) {
        func_0F00D8(m);
        return 0;
    }
    return m;
}
