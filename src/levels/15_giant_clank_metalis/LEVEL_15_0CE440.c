/* LEVEL_15:0x0CE440 -- spawns a marker record at a position offset against a direction scaled by a length, and links it to the length source. */
typedef struct Rec {
    float f_00;
    float pos[3];
    char pad_10[0x18];
    float dir[3];
    float *src;
} Rec;

extern Rec *func_07B5A8(int *ok, int a1, int n);
extern void func_0E6E40(float *a, float *b, void *c);

static __inline__ void SetVec(float *v, float x, float y, float z)
{
    v[0] = x;
    v[1] = y;
    v[2] = z;
}

static __inline__ void SetPoint(Rec *r, float x, float y, float z)
{
    r->f_00 = 1.0f;
    SetVec(r->pos, x, y, z);
}

void func_0CE440(int a1, float *p, void *tbl, float *d, float *s)
{
    int ok;
    Rec *r;
    float k;
    float x;
    float y;
    float z;
    float *rp;
    float *rd;

    r = func_07B5A8(&ok, a1, 1);
    if (ok != 0) {
        k = -*s;
        x = k * d[0];
        y = k * d[1];
        z = k * d[2];
        SetPoint(r, p[0] - x, p[1] - y, p[2] - z);
        func_0E6E40((float *)((char *)r + 0x10), (float *)((char *)r + 0x1C), tbl);
        SetVec(r->dir, x, y, z);
        r->src = s;
    }
}
