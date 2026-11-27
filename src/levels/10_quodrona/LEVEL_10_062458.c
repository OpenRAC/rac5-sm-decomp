/* LEVEL_10:0x062458 -- placement copy of LEVEL_01_063628.c: resolves the input-driven heading of an actor and emits a burst of particles. */
typedef struct {
    char pad0[0xC0];
    float c0[4];
    float d0;
    unsigned int mode;
    char padD8[4];
    float dc;
    float e0;
} Actor;

extern int func_0885C0(unsigned int m);
extern int func_0885F8(unsigned int m);
extern void func_046920(Actor *a, float x, float y, float *p);
extern void func_062ED0(Actor *a);
extern void func_062A48(Actor *a);
extern void func_0628B0(Actor *a);
extern void func_003498(int a, float x, float y, int b);
extern void func_0034C8(int a, float x, float y, int b);
extern void func_003638(int a, float x, float y, int b);
extern void func_003840(float a, float b, float c, float d, float e, float f, float g, float h,
                        float i, float j, float k, float l, float m, float n, float o, float p,
                        float q, float r, float s);
extern void func_062818(void *p, void *q, float f);
extern char D_00242598[];

static inline int Near(float v)
{
    return __builtin_fabsf(v) <= 0.009999999776482582f;
}

void func_062458(Actor *a)
{
    float one;
    float k;

    if ((*(long long *)&a->d0 & 0x5000000000LL) || func_0885C0(a->mode) || func_0885F8(a->mode)) {
        if ((unsigned char)Near(a->dc) && (unsigned char)Near(a->e0)) {
            a->d0 = 1.0f;
            if (a->mode & 0x10)
                a->e0 = 1.0f;
            else if (a->mode & 0x40)
                a->e0 = -1.0f;
            if (func_0885C0(a->mode))
                a->dc = 1.0f;
            else if (func_0885F8(a->mode))
                a->dc = -1.0f;
            func_046920(a, a->dc, a->e0, a->c0);
        }
    }
    one = 1.0f;
    func_062ED0(a);
    k = 0.30000001192092896f;
    func_062A48(a);
    func_0628B0(a);
    *(float *)((char *)a + 0xFB0) = 0.4000000059604645f;
    func_003498(0, 3.0f, one, 2);
    func_0034C8(0, 0.699999988079071f, one, 2);
    func_003638(0, k, one, 2);
    func_003840(0.20000000298023224f, 0.5f, 0.20000000298023224f, 0.0f,
                -0.15000000596046448f, 0.20000000298023224f, 0.05000000074505806f, 0.49000000953674316f,
                one, 0.6000000238418579f, 0.40000003576278687f, k,
                0.0f, 0.0f, 0.5f, 0.05000000074505806f,
                1.2000000476837158f, one, 0.10000000149011612f);
    if (*(char **)((char *)a + 0x59C))
        func_062818(*(char **)((char *)a + 0x59C) + 0x6C, D_00242598, 0.01666666753590107f);
}
