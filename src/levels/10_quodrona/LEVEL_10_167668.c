/* LEVEL_10:0x167668 -- when the object's record is flagged, snapshots its two position/velocity vectors, registers three samples (the raw pair, a copy, and one with half the velocity) and updates the object. */
typedef struct Rec {
    char pad_00[0x24];
    float p0[3];
    float v0[3];
    char pad_3C[0x40 - 0x3C];
    float p1[3];
    float v1[3];
    char pad_58[0x5C - 0x58];
    float p2[3];
    float v2[3];
    char pad_74[0x94 - 0x74];
    float pos[3];
    float vel[3];
    char pad_AC[0x116 - 0xAC];
    unsigned char active;
} Rec;

typedef struct Obj {
    char pad_00[0x58];
    Rec *rec;
} Obj;

extern int D_0039F100[1];
extern int D_0039F104[1];
extern void func_168C20(int id, float *v, int n);
extern void func_1677B8(Obj *o);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void Half3(float *dst, float *src)
{
    dst[0] = src[0] * 0.5f;
    dst[1] = src[1] * 0.5f;
    dst[2] = src[2] * 0.5f;
}

void func_167668(Obj *o)
{
    Rec *r;

    r = o->rec;
    if (r->active) {
        Copy3(r->p0, r->pos);
        Copy3(r->v0, r->vel);
        func_168C20(D_0039F100[0], r->p0, 2);
        Copy3(r->p1, r->p0);
        Copy3(r->v1, r->v0);
        func_168C20(D_0039F104[0], r->p1, 1);
        Copy3(r->p2, r->p0);
        Half3(r->v2, r->v0);
        func_168C20(D_0039F100[0], r->p2, 1);
        func_1677B8(o);
    }
}
