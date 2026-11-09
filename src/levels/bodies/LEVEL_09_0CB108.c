/* LEVEL_09:0x0CB108 -- placement copy of LEVEL_01_0CDE58.c: steps a fade state machine and drives a blended output value. */
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

extern int D_001ECA48;
extern float D_001ECA4C;
extern int D_001ECA50;
extern unsigned int D_001ECA58;
extern unsigned int D_001ECA5C;
extern float D_001ECA94;
extern float D_00313890;
extern char D_00313898[];
extern Entry D_001FDE10[];
extern Glob *D_001DDDAC;

extern int func_0B76B8(char *);
extern void func_0CA7A8(void);
extern void func_0CA8C8(void);
extern void func_0847A0(int);
extern void func_02E428(int, int);
extern void func_02E5B0(void);

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

void func_0CB108(void)
{
    int cur;
    int item;
    Entry *e;

    cur = D_001ECA50;
    item = func_0B76B8(D_00313898);
    if (item == 0)
        return;
    switch (D_001ECA48) {
    case 0:
        if (cur != item) {
            func_0CA7A8();
            D_001ECA48 = 2;
            D_001ECA4C = 0.0f;
        }
        break;
    case 2:
        if (fade_up(&D_001ECA4C, &D_00313890, D_001ECA94)) {
            D_001ECA58 = 0;
            D_001ECA48 = 1;
            func_0847A0(0);
        }
        break;
    case 1:
        D_001ECA58++;
        if (D_001ECA58 == D_001ECA5C) {
            e = &D_001FDE10[((Item *)item)->index];
            func_02E428(e->id, 1);
            func_02E5B0();
            D_001DDDAC->b1C7E = e->id;
        }
        if (D_001ECA58 >= 10) {
            D_001ECA50 = item;
            func_0CA8C8();
            D_001ECA48 = 3;
            func_0847A0(0x200);
        }
        break;
    case 3:
        if (cur != item) {
            func_0CA7A8();
            D_001ECA48 = 2;
        }
        if (fade_down(&D_001ECA4C, &D_00313890, D_001ECA94))
            D_001ECA48 = 0;
        break;
    }
}
