/* LEVEL_20:0x0A7A88 -- placement copy of LEVEL_01_0CDE58.c: steps a fade state machine and drives a blended output value. */
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

extern int D_001131D8;
extern float D_001131DC;
extern int D_001131E0;
extern unsigned int D_001131E8;
extern unsigned int D_001131EC;
extern float D_00113224;
extern float D_0019D9D0;
extern char D_0019D9D8[];
extern Entry D_0012A150[];
extern Glob *D_00104194;

extern int func_093988(char *);
extern void func_0A7128(void);
extern void func_0A7248(void);
extern void func_066F98(int);
extern void func_0298E0(int, int);
extern void func_029A68(void);

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

void func_0A7A88(void)
{
    int cur;
    int item;
    Entry *e;

    cur = D_001131E0;
    item = func_093988(D_0019D9D8);
    if (item == 0)
        return;
    switch (D_001131D8) {
    case 0:
        if (cur != item) {
            func_0A7128();
            D_001131D8 = 2;
            D_001131DC = 0.0f;
        }
        break;
    case 2:
        if (fade_up(&D_001131DC, &D_0019D9D0, D_00113224)) {
            D_001131E8 = 0;
            D_001131D8 = 1;
            func_066F98(0);
        }
        break;
    case 1:
        D_001131E8++;
        if (D_001131E8 == D_001131EC) {
            e = &D_0012A150[((Item *)item)->index];
            func_0298E0(e->id, 1);
            func_029A68();
            D_00104194->b1C7E = e->id;
        }
        if (D_001131E8 >= 10) {
            D_001131E0 = item;
            func_0A7248();
            D_001131D8 = 3;
            func_066F98(0x200);
        }
        break;
    case 3:
        if (cur != item) {
            func_0A7128();
            D_001131D8 = 2;
        }
        if (fade_down(&D_001131DC, &D_0019D9D0, D_00113224))
            D_001131D8 = 0;
        break;
    }
}
