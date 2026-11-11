/* LEVEL_02:0x1B4470 -- chooses the next behavior state from the held object, a probe result and the distance to the player. */

extern void func_01AC80(float *out);
extern int func_08B060(int a0, float *a1);
extern int func_031B88(void *a0, void *a1, int a2, int a3, int t0, float f12, float f13);
extern char *func_01ACC0(void);

int func_1B4470(char *a0)
{
    float v[4];
    char *s0;
    char *s2;
    unsigned char *o;
    char *p;
    float *pa;
    int r;
    int t;
    float dx;
    float dz;
    float d;

    func_01AC80(v);
    s0 = *(char **)(a0 + 0x54);
    o = *(unsigned char **)(s0 + 0x3C);
    s2 = *(char **)(a0 + 0x58);
    if (o != 0) {
        if (o[0x45] != 2) {
            return 2;
        }
        *(int *)(s0 + 0x3C) = 0;
    }
    if (func_08B060(*(int *)(s0 + 0x10), v) == 0) {
        return 3;
    }
    r = func_031B88(s0, a0, *(int *)(s0 + 0x30), *(unsigned char *)(s2 + 0x54), 0, 0.9f, 1.85f);
    if (r == 0) {
        pa = (float *)(a0 + 0x30);
        p = func_01ACC0();
        dx = *(float *)(a0 + 0x30) - *(float *)(p + 0x30);
        dz = pa[2] - *(float *)(p + 0x38);
        d = dx * dx + dz * dz;
        t = *(unsigned char *)(a0 + 0x45);
        if (t == 9 || t == 1) {
            if (d <= 36.0f) {
                return 0xA;
            }
            return 9;
        }
        if (d >= 64.0f) {
            return 8;
        }
        return 0xB;
    }
    if (r != 2) {
        return 0xF;
    }
    if (!(*(float *)(a0 + 0x70) <= 0.0f)) {
        return 0xF;
    }
    return 0xE;
}
