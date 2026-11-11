/* LEVEL_04:0x1CDFC0 -- placement copy of LEVEL_01_1BB100.c: picks the next state from the distance to the tracked point, looking up a target when it is in range. */
extern void func_019F78(float *out);
extern int func_087C38(int h, float *out);
extern char *func_1CE920(char *o, float *pf);
extern int func_1D1C30(char *object, int value);
extern void func_1CDCA0(char *o, int code);

static __inline__ void Sub3(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

static __inline__ float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

void func_1CDFC0(char *o)
{
    float buf[4];
    float d[4];
    float t1;
    float t2;
    float dist2;
    char *tgt;
    char *ctl;
    char *p;

    tgt = *(char **)(o + 0x54);
    ctl = *(char **)(o + 0x58);
    func_019F78(buf);
    if (func_087C38(*(int *)(tgt + 0x34), buf) == 0) {
        func_1CDCA0(o, 0xF);
        return;
    }
    Sub3(d, buf, (float *)(o + 0x30));
    dist2 = Dot3(d, d);
    if (dist2 <= 25.0f) {
        func_1CDCA0(o, 0x11);
    } else if (dist2 <= 225.0f) {
        t1 = 0.0f;
        p = func_1CE920(o, &t1);
        if (p == 0 || dist2 < t1) {
            func_1CDCA0(o, 0x11);
        } else {
            *(char **)(ctl + 0x40) = p;
            func_1D1C30(p, o);
            func_1CDCA0(o, 0x15);
        }
    } else {
        t2 = 0.0f;
        p = func_1CE920(o, &t2);
        if (p == 0) {
            func_1CDCA0(o, 0x11);
        } else {
            *(char **)(ctl + 0x40) = p;
            func_1D1C30(p, o);
            func_1CDCA0(o, 0x15);
        }
    }
}
