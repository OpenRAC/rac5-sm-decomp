/* LEVEL_08:0x0BC650 -- placement copy of LEVEL_04_0B6F68.c: sets the gauge target (open or closed) and steps the damped spring of the gauge towards it for the elapsed frames, at most two steps per call. */

extern unsigned int D_00245054;
extern float D_00245058;
extern float D_0024505C;
extern char D_0024506C;
extern float D_00237E1C;
extern float D_00245064;
extern float D_00245068;

extern unsigned int func_0BC640(void);

static __inline__ int *minA(int *a, int *b)
{
    return (*a < *b) ? a : b;
}

void func_0BC650(int mode, unsigned char bits, float p1, float p2)
{
    int n1;
    int two1;
    int n2;
    int two2;

    func_0BC640();
    D_00245054 = bits;
    D_00245058 = p1;
    D_0024505C = p2;
    D_0024506C = mode;
    if (mode != 0) {
        int steps;
        int i;
        float one;
        float k1;
        float k2;
        float *xp;
        float *vp;

        one = 1.0f;
        k1 = 0.01f;
        k2 = 0.2f;
        n1 = (int)(D_00237E1C * 59.998802f);
        two1 = 2;
        steps = *minA(&n1, &two1);
        xp = &D_00245064;
        vp = &D_00245068;
        for (i = 0; i < steps; i++) {
            *vp = (one - *xp) * k1 - *vp * k2;
            if (*vp > one) {
                *vp = one;
            } else if (*vp < -1.0f) {
                *vp = -1.0f;
            }
            *xp = *xp + *vp;
        }
    } else {
        int *m;
        int steps;
        int i;
        float zero;
        float k1;
        float k2;
        float one;
        float *xp;
        float *vp;

        zero = 0.0f;
        k1 = 0.01f;
        k2 = 0.2f;
        one = 1.0f;
        n2 = (int)(D_00237E1C * 59.998802f);
        two2 = 2;
        m = &n2;
        if (!(n2 < two2)) {
            m = &two2;
        }
        steps = *m;
        xp = &D_00245064;
        vp = &D_00245068;
        for (i = 0; i < steps; i++) {
            *vp = (zero - *xp) * k1 - *vp * k2;
            if (*vp > one) {
                *vp = one;
            } else if (*vp < -1.0f) {
                *vp = -1.0f;
            }
            *xp = *xp + *vp;
        }
    }
}
