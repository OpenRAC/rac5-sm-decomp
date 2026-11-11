/* LEVEL_01:0x0CDE58 -- steps a fade state machine and drives a blended output value. */
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

extern int D_00202C48;
extern float D_00202C4C;
extern int D_00202C50;
extern unsigned int D_00202C58;
extern unsigned int D_00202C5C;
extern float D_00202C94;
extern float D_0032C110;
extern char D_0032C118[];
extern Entry D_00214210[];
extern Glob *D_001F3FAC;

extern int func_0BA408(char *);
extern void func_0CD4F8(void);
extern void func_0CD618(void);
extern void func_087DE8(int);
extern void func_02F5C8(int, int);
extern void func_02F750(void);

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

void func_0CDE58(void)
{
    int cur;
    int item;
    Entry *e;

    cur = D_00202C50;
    item = func_0BA408(D_0032C118);
    if (item == 0)
        return;
    switch (D_00202C48) {
    case 0:
        if (cur != item) {
            func_0CD4F8();
            D_00202C48 = 2;
            D_00202C4C = 0.0f;
        }
        break;
    case 2:
        if (fade_up(&D_00202C4C, &D_0032C110, D_00202C94)) {
            D_00202C58 = 0;
            D_00202C48 = 1;
            func_087DE8(0);
        }
        break;
    case 1:
        D_00202C58++;
        if (D_00202C58 == D_00202C5C) {
            e = &D_00214210[((Item *)item)->index];
            func_02F5C8(e->id, 1);
            func_02F750();
            D_001F3FAC->b1C7E = e->id;
        }
        if (D_00202C58 >= 10) {
            D_00202C50 = item;
            func_0CD618();
            D_00202C48 = 3;
            func_087DE8(0x200);
        }
        break;
    case 3:
        if (cur != item) {
            func_0CD4F8();
            D_00202C48 = 2;
        }
        if (fade_down(&D_00202C4C, &D_0032C110, D_00202C94))
            D_00202C48 = 0;
        break;
    }
}
