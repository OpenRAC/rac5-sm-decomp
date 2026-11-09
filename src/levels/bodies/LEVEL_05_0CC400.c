/* LEVEL_05:0x0CC400 -- placement copy of LEVEL_01_0CDE58.c: steps a fade state machine and drives a blended output value. */
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

extern int D_001F1FC8;
extern float D_001F1FCC;
extern int D_001F1FD0;
extern unsigned int D_001F1FD8;
extern unsigned int D_001F1FDC;
extern float D_001F2014;
extern float D_00317FD0;
extern char D_00317FD8[];
extern Entry D_00203110[];
extern Glob *D_001E332C;

extern int func_0B89B0(char *);
extern void func_0CBAA0(void);
extern void func_0CBBC0(void);
extern void func_085740(int);
extern void func_02E280(int, int);
extern void func_02E408(void);

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

void func_0CC400(void)
{
    int cur;
    int item;
    Entry *e;

    cur = D_001F1FD0;
    item = func_0B89B0(D_00317FD8);
    if (item == 0)
        return;
    switch (D_001F1FC8) {
    case 0:
        if (cur != item) {
            func_0CBAA0();
            D_001F1FC8 = 2;
            D_001F1FCC = 0.0f;
        }
        break;
    case 2:
        if (fade_up(&D_001F1FCC, &D_00317FD0, D_001F2014)) {
            D_001F1FD8 = 0;
            D_001F1FC8 = 1;
            func_085740(0);
        }
        break;
    case 1:
        D_001F1FD8++;
        if (D_001F1FD8 == D_001F1FDC) {
            e = &D_00203110[((Item *)item)->index];
            func_02E280(e->id, 1);
            func_02E408();
            D_001E332C->b1C7E = e->id;
        }
        if (D_001F1FD8 >= 10) {
            D_001F1FD0 = item;
            func_0CBBC0();
            D_001F1FC8 = 3;
            func_085740(0x200);
        }
        break;
    case 3:
        if (cur != item) {
            func_0CBAA0();
            D_001F1FC8 = 2;
        }
        if (fade_down(&D_001F1FCC, &D_00317FD0, D_001F2014))
            D_001F1FC8 = 0;
        break;
    }
}
