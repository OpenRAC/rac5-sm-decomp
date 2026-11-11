/* LEVEL_07:0x0CFEB8 -- placement copy of LEVEL_01_0CDE58.c: steps a fade state machine and drives a blended output value. */
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

extern int D_00216F48;
extern float D_00216F4C;
extern int D_00216F50;
extern unsigned int D_00216F58;
extern unsigned int D_00216F5C;
extern float D_00216F94;
extern float D_00341A10;
extern char D_00341A18[];
extern Entry D_00228F10[];
extern Glob *D_002082AC;

extern int func_0BC468(char *);
extern void func_0CF558(void);
extern void func_0CF678(void);
extern void func_089EB8(int);
extern void func_02F900(int, int);
extern void func_02FA88(void);

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

void func_0CFEB8(void)
{
    int cur;
    int item;
    Entry *e;

    cur = D_00216F50;
    item = func_0BC468(D_00341A18);
    if (item == 0)
        return;
    switch (D_00216F48) {
    case 0:
        if (cur != item) {
            func_0CF558();
            D_00216F48 = 2;
            D_00216F4C = 0.0f;
        }
        break;
    case 2:
        if (fade_up(&D_00216F4C, &D_00341A10, D_00216F94)) {
            D_00216F58 = 0;
            D_00216F48 = 1;
            func_089EB8(0);
        }
        break;
    case 1:
        D_00216F58++;
        if (D_00216F58 == D_00216F5C) {
            e = &D_00228F10[((Item *)item)->index];
            func_02F900(e->id, 1);
            func_02FA88();
            D_002082AC->b1C7E = e->id;
        }
        if (D_00216F58 >= 10) {
            D_00216F50 = item;
            func_0CF678();
            D_00216F48 = 3;
            func_089EB8(0x200);
        }
        break;
    case 3:
        if (cur != item) {
            func_0CF558();
            D_00216F48 = 2;
        }
        if (fade_down(&D_00216F4C, &D_00341A10, D_00216F94))
            D_00216F48 = 0;
        break;
    }
}
