/* LEVEL_17:0x0BCA98 -- placement copy of LEVEL_01_0CDE58.c: steps a fade state machine and drives a blended output value. */
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

extern int D_001A40F8;
extern float D_001A40FC;
extern int D_001A4100;
extern unsigned int D_001A4108;
extern unsigned int D_001A410C;
extern float D_001A4144;
extern float D_0026B490;
extern char D_0026B498[];
extern Entry D_001BC550[];
extern Glob *D_001950B4;

extern int func_0A8998(char *);
extern void func_0BC138(void);
extern void func_0BC258(void);
extern void func_079DA0(int);
extern void func_02C758(int, int);
extern void func_02C8E0(void);

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

void func_0BCA98(void)
{
    int cur;
    int item;
    Entry *e;

    cur = D_001A4100;
    item = func_0A8998(D_0026B498);
    if (item == 0)
        return;
    switch (D_001A40F8) {
    case 0:
        if (cur != item) {
            func_0BC138();
            D_001A40F8 = 2;
            D_001A40FC = 0.0f;
        }
        break;
    case 2:
        if (fade_up(&D_001A40FC, &D_0026B490, D_001A4144)) {
            D_001A4108 = 0;
            D_001A40F8 = 1;
            func_079DA0(0);
        }
        break;
    case 1:
        D_001A4108++;
        if (D_001A4108 == D_001A410C) {
            e = &D_001BC550[((Item *)item)->index];
            func_02C758(e->id, 1);
            func_02C8E0();
            D_001950B4->b1C7E = e->id;
        }
        if (D_001A4108 >= 10) {
            D_001A4100 = item;
            func_0BC258();
            D_001A40F8 = 3;
            func_079DA0(0x200);
        }
        break;
    case 3:
        if (cur != item) {
            func_0BC138();
            D_001A40F8 = 2;
        }
        if (fade_down(&D_001A40FC, &D_0026B490, D_001A4144))
            D_001A40F8 = 0;
        break;
    }
}
