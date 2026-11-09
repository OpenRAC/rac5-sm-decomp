/* LEVEL_02:0x0D47E8 -- placement copy of LEVEL_01_0CDE58.c: steps a fade state machine and drives a blended output value. */
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

extern int D_00217C08;
extern float D_00217C0C;
extern int D_00217C10;
extern unsigned int D_00217C18;
extern unsigned int D_00217C1C;
extern float D_00217C54;
extern float D_00343610;
extern char D_00343618[];
extern Entry D_00229190[];
extern Glob *D_00208C2C;

extern int func_0C0D18(char *);
extern void func_0D3E88(void);
extern void func_0D3FA8(void);
extern void func_08E718(int);
extern void func_02FD88(int, int);
extern void func_02FF10(void);

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

void func_0D47E8(void)
{
    int cur;
    int item;
    Entry *e;

    cur = D_00217C10;
    item = func_0C0D18(D_00343618);
    if (item == 0)
        return;
    switch (D_00217C08) {
    case 0:
        if (cur != item) {
            func_0D3E88();
            D_00217C08 = 2;
            D_00217C0C = 0.0f;
        }
        break;
    case 2:
        if (fade_up(&D_00217C0C, &D_00343610, D_00217C54)) {
            D_00217C18 = 0;
            D_00217C08 = 1;
            func_08E718(0);
        }
        break;
    case 1:
        D_00217C18++;
        if (D_00217C18 == D_00217C1C) {
            e = &D_00229190[((Item *)item)->index];
            func_02FD88(e->id, 1);
            func_02FF10();
            D_00208C2C->b1C7E = e->id;
        }
        if (D_00217C18 >= 10) {
            D_00217C10 = item;
            func_0D3FA8();
            D_00217C08 = 3;
            func_08E718(0x200);
        }
        break;
    case 3:
        if (cur != item) {
            func_0D3E88();
            D_00217C08 = 2;
        }
        if (fade_down(&D_00217C0C, &D_00343610, D_00217C54))
            D_00217C08 = 0;
        break;
    }
}
