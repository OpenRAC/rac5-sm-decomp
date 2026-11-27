/* LEVEL_04:0x0B6F68 -- sets the gauge target (open or closed) and steps the damped spring of the gauge towards it for the elapsed frames, at most two steps per call. */

extern unsigned int D_00215654;
extern float D_00215658;
extern float D_0021565C;
extern char D_0021566C;
extern float D_0020841C;
extern float D_00215664;
extern float D_00215668;

extern unsigned int func_0B6F58(void);

static __inline__ int *minA(int *a, int *b)
{
    return (*a < *b) ? a : b;
}

void func_0B6F68(int mode, unsigned char bits, float p1, float p2)
{
    int n1;
    int two1;
    int n2;
    int two2;

    func_0B6F58();
    D_00215654 = bits;
    D_00215658 = p1;
    D_0021565C = p2;
    D_0021566C = mode;
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
        n1 = (int)(D_0020841C * 59.998802f);
        two1 = 2;
        steps = *minA(&n1, &two1);
        xp = &D_00215664;
        vp = &D_00215668;
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
        n2 = (int)(D_0020841C * 59.998802f);
        two2 = 2;
        m = &n2;
        if (!(n2 < two2)) {
            m = &two2;
        }
        steps = *m;
        xp = &D_00215664;
        vp = &D_00215668;
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
