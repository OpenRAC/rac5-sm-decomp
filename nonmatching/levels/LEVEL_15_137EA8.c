/* USA LEVEL_15.REL:0x137EA8, 816-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 1 differing words; first difference at 0x198.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern void func_137E48(char *a0, char *a1, float w);
extern void func_137E08(float *a0, float *a1, float k);
extern void func_137DE8(int *first, int *second);
extern void func_101A00(int a0, char *s0);
extern int func_022148(void);

void func_137EA8(char *a, char *b)
{
    char *g;
    char *h;
    char *t;
    int *p;
    char *rec;
    char *t28;
    unsigned char ok;

    g = *(char **)(b + 0x28);
    h = *(char **)(b + 0x2C);
    t = *(char **)(a + 0x54);
    p = *(int **)(b + 4);
    rec = *(char **)g;
    *(int *)h = 0;
    func_137E48(b + 0x14, t + 0x1C, 1.0f);
    func_137E08((float *)(b + 0x24), (float *)(t + 0xC), 30.0f);
    t28 = t + 0x28;
    func_137E48(b + 0x34, t28, -1.0f);
    func_137E48(b + 0x54, t28, 1.0f);
    func_137E08((float *)(b + 0x60), (float *)(t + 0x18), 30.0f);
    func_137E08((float *)(b + 0x64), (float *)(t + 0x10), 30.0f);
    func_137E08((float *)(b + 0x70), (float *)(t + 0x3C), 0.01745329238474369f);
    func_137E08((float *)(b + 0x74), (float *)(t + 0x40), 0.01745329238474369f);
    func_137E08((float *)(b + 0x78), (float *)(t + 0x44), 0.01745329238474369f);
    func_137E48(b + 0x7C, t + 0x48, 1.0f);
    func_137E08((float *)(b + 0x90), (float *)(t + 0x14), 30.0f);
    func_137DE8(p, (int *)(t + 0x34));
    func_137DE8(p + 1, (int *)(t + 0x38));
    ok = func_022148();
    if (ok) {
        p[0] = p[0] * 3 / 2;
        p[1] = p[1] * 3 / 2;
        *(float *)(b + 0x90) = *(float *)(b + 0x90) / 1.5f;
    }
    func_137E08((float *)(rec + 4), (float *)(t + 0x60), 0.01745329238474369f);
    func_137E08((float *)(rec + 8), (float *)(t + 0x64), 0.01745329238474369f);
    func_137E08((float *)(rec + 0xC), (float *)(t + 0x68), 0.01745329238474369f);
    func_137E48(rec + 0x10, t + 0x54, 1.0f);
    func_137DE8((int *)(h + 8), (int *)(t + 8));
    func_137E08((float *)(h + 4), (float *)(t + 4), 1.0f);
    func_137E08((float *)(h + 0xC), (float *)(t + 0x6C), 1.0f);
    func_137E08((float *)(h + 0x10), (float *)(t + 0x70), 0.03333333507180214f);
    func_137E08((float *)(h + 0x14), (float *)(t + 0x74), 0.03333333507180214f);
    func_137E08((float *)(h + 0x18), (float *)(t + 0x78), 0.0011111112544313073f);
    func_137E08((float *)(h + 0x1C), (float *)(t + 0x7C), 0.01745329238474369f);
    func_137E08((float *)(h + 0x20), (float *)(t + 0x80), 0.01745329238474369f);
    func_137E08((float *)(h + 0x34), (float *)(t + 0x84), 30.0f);
    func_137E08((float *)(h + 0x38), (float *)(t + 0x88), 30.0f);
    func_137E08((float *)(h + 0x3C), (float *)(t + 0x8C), 30.0f);
    func_137E08((float *)(h + 0x40), (float *)(t + 0x90), 30.0f);
    func_137E48(h + 0x44, t + 0x94, 1.0f);
    func_137E08((float *)(h + 0x50), (float *)(t + 0xA0), 0.03333333507180214f);
    func_137E08((float *)(h + 0x54), (float *)(t + 0xA4), 0.0011111112544313073f);
    func_101A00((int)g, h);
}
