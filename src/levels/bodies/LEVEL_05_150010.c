/* LEVEL_05:0x150010 -- placement copy of LEVEL_01_154620.c: allocates an effect record of the given type at a point and orients it by a random angle (cosine and signed sine). */
extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad0[2];
    short type;
    char pad4[0x24];
    Vec3 pos;
    int w34;
    void *link;
    char sub3C[4];
} Fx;

typedef struct {
    int w0;
    int w4;
    char pad8[0x24];
} Def;

extern Def D_0020C1F0[];
extern char D_0037DC7C[];
extern char D_00206D88[];
extern char D_00206DA8[];

extern Fx *func_09E1D0(int *out, char *name, int n);
extern int func_0270A8(void);
extern void func_04B240(int n);
extern void func_1227B0(void *dst, void *link, Vec3 *pos, int z);
extern void func_14D730(Fx *fx, float s, float c, char *a, char *b);

static __inline__ float RandRange(float lo, float hi)
{
    float d;

    d = hi - lo;
    return (float)rand() * 4.656613e-10f * d + lo;
}

void func_150010(int type, Vec3 *pos, void *link)
{
    int out[4];
    Fx *fx;
    int addr;
    int n;
    float a;
    float c;
    float s;

    fx = func_09E1D0(out, D_0037DC7C, 1);
    if (out[0] == 0) {
        addr = type * sizeof(Def);
        addr += (int)D_0020C1F0;
        if (func_0270A8() != 0) {
            n = ((Def *)addr)->w4 << 2;
        } else {
            n = ((Def *)addr)->w4;
        }
        func_04B240(n);
    } else {
        fx->type = type;
        fx->w34 = 0;
        fx->pos = *pos;
        fx->link = link;
        if (link != 0) {
            func_1227B0(fx->sub3C, link, pos, 0);
        }
        a = RandRange(-3.1415927f, 3.1415927f);
        c = cosf(a);
        s = sqrtf(1.0f - c * c);
        if (a < 0.0f) {
            s = -s;
        }
        func_14D730(fx, s, c, D_00206D88, D_00206DA8);
    }
}
