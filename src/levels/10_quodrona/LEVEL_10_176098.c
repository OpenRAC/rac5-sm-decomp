/* LEVEL_10:0x176098 -- initialises the shared lighting tables the first time it is requested. */
extern float expf(float x);
extern void *memset(void *p, int c, unsigned int n);

typedef struct {
    float v[7];
} Rec;

extern float D_0039F1E8[4];
extern float D_0039F1F8;
extern Rec D_0039F200;
extern Rec D_0039F220;
extern Rec D_0039F240;
extern Rec D_0039F260;

void func_176098(int a, int b)
{
    Rec r;
    float *e;
    Rec *p1;
    Rec *p2;
    Rec *p3;
    Rec *p4;

    if (b != 0xFFFF)
        return;
    if (a == 0)
        return;
    D_0039F1E8[0] = 0.0f;
    D_0039F1E8[3] = 1.0f;
    D_0039F1E8[2] = 0.0f;
    D_0039F1E8[1] = 0.0f;
    e = &D_0039F1F8;
    p1 = &D_0039F200;
    p2 = &D_0039F220;
    p3 = &D_0039F240;
    p4 = &D_0039F260;
    *e = expf(-0.5f);

    memset(&r, 0, sizeof(r));
    r.v[0] = 0.06666667f;
    r.v[1] = 0.26666668f;
    r.v[2] = 0.5f;
    r.v[3] = expf(-0.5f);
    r.v[4] = 0.20943953096866608f;
    r.v[5] = 0.5f;
    r.v[6] = expf(-0.5f);
    *p1 = r;

    memset(&r, 0, sizeof(r));
    r.v[0] = 0.06666667f;
    r.v[1] = 0.26666668f;
    r.v[2] = 0.5f;
    r.v[3] = expf(-0.5f);
    r.v[4] = 0.10471976548433304f;
    r.v[5] = 0.5f;
    r.v[6] = expf(-0.5f);
    *p2 = r;

    memset(&r, 0, sizeof(r));
    r.v[2] = 0.5f;
    r.v[3] = expf(-0.5f);
    *p3 = r;

    memset(&r, 0, sizeof(r));
    r.v[2] = 0.5f;
    r.v[3] = expf(-0.5f);
    r.v[4] = 0.05235988274216652f;
    r.v[5] = 0.5f;
    r.v[6] = expf(-0.5f);
    *p4 = r;
}
