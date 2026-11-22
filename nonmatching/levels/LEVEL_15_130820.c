/* USA LEVEL_15.REL:0x130820, 316-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 9 differing words; first difference at 0xA0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float sqrtf(float);
extern char *D_002F3E14;

extern int func_0E1A68(char *a, char *b, char *pos_, float t_, float len2_, float scaled_, char *c, char *d, char *e, int p3_, int p4_);
extern int func_0DB020(int a, int b, int c, int d, int e, float t_, float s_, int f, int g, int h);

int func_130820(char *base, int p3, int p4, float t, float s)
{
    struct {
        int w0[4];
        int w1;
        int w2[3];
    } loc;
    char *scene;
    char *pos;
    float *p;
    float len2;
    unsigned char ok;

    pos = base - 0x5C;
    scene = *(char **)(pos + 0x58);
    p = (float *)pos;
    len2 = p[0] * p[0] + p[1] * p[1] + p[2] * p[2];
    ok = func_0E1A68(scene + 0x34, scene + 0x40, pos, t, len2, s * sqrtf(len2), base - 0x50, base - 0x44, base - 0x38, p3, p4);
    if (ok == 0) {
        return 0;
    }
    if (func_0DB020((int)&loc.w1, (int)loc.w2, (int)loc.w0, p3, p4, t, s, (int)scene, (int)pos, (int)D_002F3E14) != 0) {
        return 1;
    }
    return 0;
}
