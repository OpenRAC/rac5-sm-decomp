/* LEVEL_10:0x0CF298 -- placement copy of LEVEL_01_0CDE58.c: steps a fade state machine and drives a blended output value. */
typedef struct {
    unsigned char pad00[0xD0];
    int index;
} Item;
typedef struct {
    int id;
    int pad[3];
} Entry;
typedef struct {
    unsigned char pad00[0x1C7E];
    unsigned char b1C7E;
} Glob;

extern int D_0020BC48;
extern float D_0020BC4C;
extern int D_0020BC50;
extern unsigned int D_0020BC58;
extern unsigned int D_0020BC5C;
extern float D_0020BC94;
extern float D_00335510;
extern char D_00335518[];
extern Entry D_0021D190[];
extern Glob *D_001FCFAC;

extern int func_0BB750(char *);
extern void func_0CE938(void);
extern void func_0CEA58(void);
extern void func_088150(int);
extern void func_02F450(int, int);
extern void func_02F5D8(void);

extern float fabsf(float);

static inline int approx(float a, float b)
{
    int r = 1;

    if (!(fabsf(a - b) <= 1.0e-05f))
        r = 0;
    return r;
}

static inline unsigned char reached(float t, float goal)
{
    unsigned char a = approx(t, goal);

    if (a)
        return 1;
    return 0;
}

static inline void blend(float *out, float t, float target)
{
    float v;

    if (t <= 1.0e-04f)
        v = target;
    else if (0.9990000128746033f <= t)
        v = 0.0f;
    else
        v = (0.0f - target) * (t * t * -2.0f * t + t * t * 3.0f) + target;
    *out = v;
}

static inline unsigned char fade_up(float *p, float *out, float target)
{
    *p = *p + 0.16666667f;
    if (*p > 1.0f)
        *p = 1.0f;
    blend(out, *p, target);
    return reached(*p, 1.0f);
}

static inline unsigned char fade_down(float *p, float *out, float target)
{
    *p = *p - 0.16666667f;
    if (*p < 0.0f)
        *p = 0.0f;
    blend(out, *p, target);
    return reached(*p, 0.0f);
}

void func_0CF298(void)
{
    int cur;
    int item;
    Entry *e;

    cur = D_0020BC50;
    item = func_0BB750(D_00335518);
    if (item == 0)
        return;
    switch (D_0020BC48) {
    case 0:
        if (cur != item) {
            func_0CE938();
            D_0020BC48 = 2;
            D_0020BC4C = 0.0f;
        }
        break;
    case 2:
        if (fade_up(&D_0020BC4C, &D_00335510, D_0020BC94)) {
            D_0020BC58 = 0;
            D_0020BC48 = 1;
            func_088150(0);
        }
        break;
    case 1:
        D_0020BC58++;
        if (D_0020BC58 == D_0020BC5C) {
            e = &D_0021D190[((Item *)item)->index];
            func_02F450(e->id, 1);
            func_02F5D8();
            D_001FCFAC->b1C7E = e->id;
        }
        if (D_0020BC58 >= 10) {
            D_0020BC50 = item;
            func_0CEA58();
            D_0020BC48 = 3;
            func_088150(0x200);
        }
        break;
    case 3:
        if (cur != item) {
            func_0CE938();
            D_0020BC48 = 2;
        }
        if (fade_down(&D_0020BC4C, &D_00335510, D_0020BC94))
            D_0020BC48 = 0;
        break;
    }
}
