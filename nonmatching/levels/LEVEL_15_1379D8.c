/* USA LEVEL_15.REL:0x1379D8, 344-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 1 differing words; first difference at 0x64.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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

int func_1379D8(struct Fade1379D8 *f)
{
    float v[2];
    float *p;
    float k;

    f->t += 1.0f;
    if (f->t >= 57.0f) {
        func_014620();
    }
    if (f->t > 30.0f) {
        v[1] = 1.0f;
        v[0] = (f->t - 30.0f) * 0.03999999910593033f;
        p = (v[0] < v[1]) ? &v[0] : &v[1];
        k = *p;
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
