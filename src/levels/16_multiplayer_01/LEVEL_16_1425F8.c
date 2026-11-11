/* LEVEL_16:0x1425F8 -- rotates the three axis rows of a frame, advances its origin and rescales the axes. */

typedef struct Src {
    char pad_00[4];
    float step;
    char pad_08[8];
    int index;
    char pad_14[4];
    float scale;
    char pad_1C[4];
    unsigned char dirty;
} Src;

typedef struct Frame {
    float r0[3];
    float w0;
    float r1[3];
    float w1;
    float r2[3];
    float w2;
    float t[3];
    float w3;
    char pad_40[0x18];
    Src *src;
} Frame;

typedef struct Cell {
    int pad[20];
} Cell;

extern int D_001BD8EC;
extern Cell D_002E4A68[];

extern void func_0EDA48(int a, float *pos, Cell *cell);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void AddScaled(float *d, float *v, float s)
{
    d[0] = d[0] + v[0] * s;
    d[1] = d[1] + v[1] * s;
    d[2] = d[2] + v[2] * s;
}

static __inline__ void Scale(float *v, float s)
{
    v[0] = v[0] * s;
    v[1] = v[1] * s;
    v[2] = v[2] * s;
}

void func_1425F8(Frame *p)
{
    float a[3];
    float b[3];
    float c[3];
    Src *s;

    Copy3(a, p->r2);
    Copy3(c, p->r1);
    Copy3(b, p->r0);
    Copy3(p->r0, c);
    Copy3(p->r1, a);
    Copy3(p->r2, b);
    AddScaled(p->t, p->r1, p->src->step);
    s = p->src;
    if (s->dirty != 0) {
        func_0EDA48(D_001BD8EC, p->t, &D_002E4A68[s->index]);
        s->dirty = 0;
    }
    Scale(p->r2, s->scale);
    Scale(p->r0, s->scale);
    Scale(p->r1, s->scale);
}
