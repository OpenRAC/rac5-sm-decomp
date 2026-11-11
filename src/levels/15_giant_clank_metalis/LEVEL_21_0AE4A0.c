/* LEVEL_21:0x0AE4A0 -- placement copy of LEVEL_01_0CDE58.c: steps a fade state machine and drives a blended output value. */
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

extern int D_001578C8;
extern float D_001578CC;
extern int D_001578D0;
extern unsigned int D_001578D8;
extern unsigned int D_001578DC;
extern float D_00157914;
extern float D_00243950;
extern char D_00243958[];
extern Entry D_00168990[];
extern Glob *D_00148C2C;

extern int func_09AA50(char *);
extern void func_0ADB40(void);
extern void func_0ADC60(void);
extern void func_06C4C8(int);
extern void func_028B50(int, int);
extern void func_028CD8(void);

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

void func_0AE4A0(void)
{
    int cur;
    int item;
    Entry *e;

    cur = D_001578D0;
    item = func_09AA50(D_00243958);
    if (item == 0)
        return;
    switch (D_001578C8) {
    case 0:
        if (cur != item) {
            func_0ADB40();
            D_001578C8 = 2;
            D_001578CC = 0.0f;
        }
        break;
    case 2:
        if (fade_up(&D_001578CC, &D_00243950, D_00157914)) {
            D_001578D8 = 0;
            D_001578C8 = 1;
            func_06C4C8(0);
        }
        break;
    case 1:
        D_001578D8++;
        if (D_001578D8 == D_001578DC) {
            e = &D_00168990[((Item *)item)->index];
            func_028B50(e->id, 1);
            func_028CD8();
            D_00148C2C->b1C7E = e->id;
        }
        if (D_001578D8 >= 10) {
            D_001578D0 = item;
            func_0ADC60();
            D_001578C8 = 3;
            func_06C4C8(0x200);
        }
        break;
    case 3:
        if (cur != item) {
            func_0ADB40();
            D_001578C8 = 2;
        }
        if (fade_down(&D_001578CC, &D_00243950, D_00157914))
            D_001578C8 = 0;
        break;
    }
}
