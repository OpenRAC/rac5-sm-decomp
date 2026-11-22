/* LEVEL_15:0x1379D8 -- advances the fade timer, drives the screen fade over its last half and clears the transition state. */

struct Fade1379D8 {
    char pad0[4];
    float t;
};

struct State1379D8 {
    char pad0[0x134];
    int w134;
    char pad138[0x24];
    unsigned char b15C;
    char pad15D[3];
    int w160;
};

extern struct State1379D8 D_002F4F88;

extern void func_014620(void);
extern void func_0866F8(int, unsigned int, int, int);
extern void func_0219D0(float f12);
extern void func_134680(int id, float a, float b);

static __inline__ float *MinP(float *a, float *b) { return (*a < *b) ? a : b; }

int func_1379D8(struct Fade1379D8 *f)
{
    float m;
    float one;
    float k;

    f->t += 1.0f;
    if (f->t >= 57.0f) {
        func_014620();
    }
    if (f->t > 30.0f) {
        one = 1.0f;
        m = (f->t - 30.0f) * 0.03999999910593033f;
        k = *MinP(&m, &one);
        func_0866F8(0, (int)(k * 255.89999389648438f) << 24, 0x20, 3);
        func_0219D0(1.0f - k);
    }
    if (f->t <= 13.0f && f->t > 12.0f) {
        func_134680(0, 0.0f, 0.15000000596046448f);
    }
    D_002F4F88.w160 = -1;
    D_002F4F88.b15C = 0;
    D_002F4F88.w134 = 0;
    return -1;
}
