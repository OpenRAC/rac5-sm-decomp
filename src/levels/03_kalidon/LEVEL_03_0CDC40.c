/* LEVEL_03:0x0CDC40 -- placement copy of LEVEL_01_0CDE58.c: steps a fade state machine and drives a blended output value. */
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

extern int D_0021B2C8;
extern float D_0021B2CC;
extern int D_0021B2D0;
extern unsigned int D_0021B2D8;
extern unsigned int D_0021B2DC;
extern float D_0021B314;
extern float D_00346F90;
extern char D_00346F98[];
extern Entry D_0022D110[];
extern Glob *D_0020C62C;

extern int func_0BA1F0(char *);
extern void func_0CD2E0(void);
extern void func_0CD400(void);
extern void func_087C40(int);
extern void func_02F3B8(int, int);
extern void func_02F540(void);

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

void func_0CDC40(void)
{
    int cur;
    int item;
    Entry *e;

    cur = D_0021B2D0;
    item = func_0BA1F0(D_00346F98);
    if (item == 0)
        return;
    switch (D_0021B2C8) {
    case 0:
        if (cur != item) {
            func_0CD2E0();
            D_0021B2C8 = 2;
            D_0021B2CC = 0.0f;
        }
        break;
    case 2:
        if (fade_up(&D_0021B2CC, &D_00346F90, D_0021B314)) {
            D_0021B2D8 = 0;
            D_0021B2C8 = 1;
            func_087C40(0);
        }
        break;
    case 1:
        D_0021B2D8++;
        if (D_0021B2D8 == D_0021B2DC) {
            e = &D_0022D110[((Item *)item)->index];
            func_02F3B8(e->id, 1);
            func_02F540();
            D_0020C62C->b1C7E = e->id;
        }
        if (D_0021B2D8 >= 10) {
            D_0021B2D0 = item;
            func_0CD400();
            D_0021B2C8 = 3;
            func_087C40(0x200);
        }
        break;
    case 3:
        if (cur != item) {
            func_0CD2E0();
            D_0021B2C8 = 2;
        }
        if (fade_down(&D_0021B2CC, &D_00346F90, D_0021B314))
            D_0021B2C8 = 0;
        break;
    }
}
