/* LEVEL_08:0x0D8E00 -- placement copy of LEVEL_01_0CDE58.c: steps a fade state machine and drives a blended output value. */
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

extern int D_0024BB08;
extern float D_0024BB0C;
extern int D_0024BB10;
extern unsigned int D_0024BB18;
extern unsigned int D_0024BB1C;
extern float D_0024BB54;
extern float D_0037B390;
extern char D_0037B398[];
extern Entry D_0025DE90[];
extern Glob *D_0023CB2C;

extern int func_0C52F8(char *);
extern void func_0D84A0(void);
extern void func_0D85C0(void);
extern void func_08FE38(int);
extern void func_02FD40(int, int);
extern void func_02FEC8(void);

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

void func_0D8E00(void)
{
    int cur;
    int item;
    Entry *e;

    cur = D_0024BB10;
    item = func_0C52F8(D_0037B398);
    if (item == 0)
        return;
    switch (D_0024BB08) {
    case 0:
        if (cur != item) {
            func_0D84A0();
            D_0024BB08 = 2;
            D_0024BB0C = 0.0f;
        }
        break;
    case 2:
        if (fade_up(&D_0024BB0C, &D_0037B390, D_0024BB54)) {
            D_0024BB18 = 0;
            D_0024BB08 = 1;
            func_08FE38(0);
        }
        break;
    case 1:
        D_0024BB18++;
        if (D_0024BB18 == D_0024BB1C) {
            e = &D_0025DE90[((Item *)item)->index];
            func_02FD40(e->id, 1);
            func_02FEC8();
            D_0023CB2C->b1C7E = e->id;
        }
        if (D_0024BB18 >= 10) {
            D_0024BB10 = item;
            func_0D85C0();
            D_0024BB08 = 3;
            func_08FE38(0x200);
        }
        break;
    case 3:
        if (cur != item) {
            func_0D84A0();
            D_0024BB08 = 2;
        }
        if (fade_down(&D_0024BB0C, &D_0037B390, D_0024BB54))
            D_0024BB08 = 0;
        break;
    }
}
