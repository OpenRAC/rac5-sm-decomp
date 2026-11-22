/* LEVEL_07:0x069AC0 -- placement copy of LEVEL_01_068DB8.c: resets an actor's launch state from a pose record: pose and camera matrix copies, the aim offset from the anchor (shorter when the reticle test passes), cleared flags and the default spin vector, then registers the effect. */

typedef struct { float f[16]; } Mat;
typedef struct { float f[9]; } Rec;

typedef struct Obj {
    char pad_00[0x20];
    float f20, f24, f28;
    char pad_2C[4];
    float f30, f34, f38;
    char pad_3C[0xDD8 - 0x3C];
    Mat m1;
    Mat m2;
    Rec r;
    int one;
    char pad_E80[0xEFC - 0xE80];
    int fEFC;
    char fF00[0x10];
    unsigned int flags_lo;
    float v14[3];
    float v20[3];
    float f2C;
    int f30i;
    float f34x;
    int f38i;
    float f3C;
    int f40i;
    float f44;
    float f48;
    char pad_F4C[4];
    int f50;
    float f54;
    int f58;
    float f5C;
    float f60;
    float v64[3];
    char pad_F70[0xF8C - 0xF70];
    int f8C;
    int f90;
} Obj;

extern float D_00222B48;
extern float D_00222B4C;
extern char D_0024AA40[];
extern char D_00001378[];

extern void func_06BB48(char *object, int value);
extern void func_03C3B0(void *obj);
extern int func_0011A8(int index);
extern void func_069930(Obj *o, float *a1, float *a2, Mat *s);
extern int func_038F68(char *object);
extern void func_04E040(float a, float b, Obj *o, int c, int d, int e);
extern void func_001088(int index, int first, int second);

static __inline__ void MulAdd3(float *d, float *a, float *b, float k)
{
    d[0] = a[0] + b[0] * k;
    d[1] = a[1] + b[1] * k;
    d[2] = a[2] + b[2] * k;
}

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void Set3(float *d, float x, float y, float z)
{
    d[0] = x;
    d[1] = y;
    d[2] = z;
}

void func_069AC0(Obj *o, Rec *src)
{
    Mat *p;
    float a, b;
    float k;
    float *vp;
    unsigned char c;
    unsigned long long *fl;

    o->one = 1;
    o->r = *src;
    func_06BB48((char *)o, 0);
    func_03C3B0(o);
    p = (Mat *)func_0011A8(0);
    o->m1 = *p;
    func_069930(o, &a, &b, p);
    o->m2 = o->m1;
    o->f34x = b;
    o->f38i = 0;
    Copy3(o->v14, &p->f[12]);
    o->f30i = 0;
    o->f40i = 0;
    o->f44 = 1.0f;
    o->f48 = -0.11111111f;
    o->f2C = a;
    o->f3C = b;
    c = func_038F68(D_0024AA40);
    k = 1.1f;
    if (c)
        k = 0.6f;
    MulAdd3(o->v20, &o->f30, &o->r.f[3], k);
    c = func_038F68(D_0024AA40);
    if (c)
        MulAdd3(o->v20, o->v20, &o->f20, -0.3f);
    vp = o->v64;
    fl = (unsigned long long *)&o->flags_lo;
    *fl = *fl & ~2ULL;
    *fl = *fl & ~0x40ULL;
    vp[0] = -0.25f;
    vp[1] = -0.5f;
    vp[2] = 0.0f;
    o->f50 = 0;
    o->fEFC = 0;
    o->f8C = 0;
    o->f90 = 0;
    o->f58 = 0;
    o->f5C = D_00222B4C;
    o->f60 = D_00222B48;
    o->f54 = -3.1415927f;
    func_04E040(0.12f, *(float *)&o->f50, o, 0, 0, 1);
    func_001088(0, (int)D_00001378, (int)((char *)o + 0xF00));
}
