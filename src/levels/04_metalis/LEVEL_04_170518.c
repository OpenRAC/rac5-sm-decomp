/* LEVEL_04:0x170518 -- probes the surface below a point, reports a hit kind through an optional word and writes the adjusted position back. */

struct Ent170518 {
    char pad00[0x08];
    char sub8[0x44];
};

struct Tab170518 {
    char pad00[0x0C];
    struct Ent170518 *ents;
};

struct Obj170518 {
    char pad00[0x30];
    float pos30[3];
};

extern int func_11D930(float *pos, float *out);
extern struct Tab170518 *func_11C270(void);
extern int func_170180(struct Obj170518 *o, float *out, float *pos, void *sub);
extern void func_013FF0(float *p, int a, int b, float x);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

int func_170518(struct Obj170518 *o, int *flag)
{
    float pos[4];
    float out[4];
    int result;
    int idx;

    result = 0;
    Copy3(pos, o->pos30);
    pos[3] = 0.180000007153f;
    idx = func_11D930(pos, out);
    if (idx >= 0) {
        if (func_170180(o, out, pos, func_11C270()->ents[idx].sub8) != 0) {
            result = 1;
            if (flag != 0) {
                *flag = 2;
            }
            func_013FF0(o->pos30, 0, 0, 0.2f);
        }
    }
    Copy3(o->pos30, pos);
    return result;
}
