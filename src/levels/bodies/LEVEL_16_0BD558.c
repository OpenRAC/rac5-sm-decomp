/* LEVEL_16:0x0BD558 -- placement copy of LEVEL_01_0CDE58.c: steps a fade state machine and drives a blended output value. */
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

extern int D_001B0AF8;
extern float D_001B0AFC;
extern int D_001B0B00;
extern unsigned int D_001B0B08;
extern unsigned int D_001B0B0C;
extern float D_001B0B44;
extern float D_0027A190;
extern char D_0027A198[];
extern Entry D_001C90D0[];
extern Glob *D_001A1AB4;

extern int func_0A9458(char *);
extern void func_0BCBF8(void);
extern void func_0BCD18(void);
extern void func_079328(int);
extern void func_02CDD8(int, int);
extern void func_02CF60(void);

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

void func_0BD558(void)
{
    int cur;
    int item;
    Entry *e;

    cur = D_001B0B00;
    item = func_0A9458(D_0027A198);
    if (item == 0)
        return;
    switch (D_001B0AF8) {
    case 0:
        if (cur != item) {
            func_0BCBF8();
            D_001B0AF8 = 2;
            D_001B0AFC = 0.0f;
        }
        break;
    case 2:
        if (fade_up(&D_001B0AFC, &D_0027A190, D_001B0B44)) {
            D_001B0B08 = 0;
            D_001B0AF8 = 1;
            func_079328(0);
        }
        break;
    case 1:
        D_001B0B08++;
        if (D_001B0B08 == D_001B0B0C) {
            e = &D_001C90D0[((Item *)item)->index];
            func_02CDD8(e->id, 1);
            func_02CF60();
            D_001A1AB4->b1C7E = e->id;
        }
        if (D_001B0B08 >= 10) {
            D_001B0B00 = item;
            func_0BCD18();
            D_001B0AF8 = 3;
            func_079328(0x200);
        }
        break;
    case 3:
        if (cur != item) {
            func_0BCBF8();
            D_001B0AF8 = 2;
        }
        if (fade_down(&D_001B0AFC, &D_0027A190, D_001B0B44))
            D_001B0AF8 = 0;
        break;
    }
}
