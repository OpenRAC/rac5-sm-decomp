/* LEVEL_18:0x0BC530 -- placement copy of LEVEL_01_0CDE58.c: steps a fade state machine and drives a blended output value. */
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

extern int D_001B1F78;
extern float D_001B1F7C;
extern int D_001B1F80;
extern unsigned int D_001B1F88;
extern unsigned int D_001B1F8C;
extern float D_001B1FC4;
extern float D_0027A510;
extern char D_0027A518[];
extern Entry D_001CA650[];
extern Glob *D_001A2F34;

extern int func_0A8430(char *);
extern void func_0BBBD0(void);
extern void func_0BBCF0(void);
extern void func_078CA8(int);
extern void func_02C388(int, int);
extern void func_02C510(void);

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

void func_0BC530(void)
{
    int cur;
    int item;
    Entry *e;

    cur = D_001B1F80;
    item = func_0A8430(D_0027A518);
    if (item == 0)
        return;
    switch (D_001B1F78) {
    case 0:
        if (cur != item) {
            func_0BBBD0();
            D_001B1F78 = 2;
            D_001B1F7C = 0.0f;
        }
        break;
    case 2:
        if (fade_up(&D_001B1F7C, &D_0027A510, D_001B1FC4)) {
            D_001B1F88 = 0;
            D_001B1F78 = 1;
            func_078CA8(0);
        }
        break;
    case 1:
        D_001B1F88++;
        if (D_001B1F88 == D_001B1F8C) {
            e = &D_001CA650[((Item *)item)->index];
            func_02C388(e->id, 1);
            func_02C510();
            D_001A2F34->b1C7E = e->id;
        }
        if (D_001B1F88 >= 10) {
            D_001B1F80 = item;
            func_0BBCF0();
            D_001B1F78 = 3;
            func_078CA8(0x200);
        }
        break;
    case 3:
        if (cur != item) {
            func_0BBBD0();
            D_001B1F78 = 2;
        }
        if (fade_down(&D_001B1F7C, &D_0027A510, D_001B1FC4))
            D_001B1F78 = 0;
        break;
    }
}
