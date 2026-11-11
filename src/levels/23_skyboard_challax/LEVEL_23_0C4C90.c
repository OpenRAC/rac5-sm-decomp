/* LEVEL_23:0x0C4C90 -- placement copy of LEVEL_01_0CDE58.c: steps a fade state machine and drives a blended output value. */
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

extern int D_001D6048;
extern float D_001D604C;
extern int D_001D6050;
extern unsigned int D_001D6058;
extern unsigned int D_001D605C;
extern float D_001D6094;
extern float D_002FD550;
extern char D_002FD558[];
extern Entry D_001E7390[];
extern Glob *D_001C73AC;

extern int func_0B11A0(char *);
extern void func_0C4330(void);
extern void func_0C4450(void);
extern void func_07DCA8(int);
extern void func_02CF50(int, int);
extern void func_02D0D8(void);

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

void func_0C4C90(void)
{
    int cur;
    int item;
    Entry *e;

    cur = D_001D6050;
    item = func_0B11A0(D_002FD558);
    if (item == 0)
        return;
    switch (D_001D6048) {
    case 0:
        if (cur != item) {
            func_0C4330();
            D_001D6048 = 2;
            D_001D604C = 0.0f;
        }
        break;
    case 2:
        if (fade_up(&D_001D604C, &D_002FD550, D_001D6094)) {
            D_001D6058 = 0;
            D_001D6048 = 1;
            func_07DCA8(0);
        }
        break;
    case 1:
        D_001D6058++;
        if (D_001D6058 == D_001D605C) {
            e = &D_001E7390[((Item *)item)->index];
            func_02CF50(e->id, 1);
            func_02D0D8();
            D_001C73AC->b1C7E = e->id;
        }
        if (D_001D6058 >= 10) {
            D_001D6050 = item;
            func_0C4450();
            D_001D6048 = 3;
            func_07DCA8(0x200);
        }
        break;
    case 3:
        if (cur != item) {
            func_0C4330();
            D_001D6048 = 2;
        }
        if (fade_down(&D_001D604C, &D_002FD550, D_001D6094))
            D_001D6048 = 0;
        break;
    }
}
