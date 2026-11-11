/* LEVEL_16:0x16BA48 -- placement copy of LEVEL_01_19C590.c: probes the surface below a point, reports a hit kind through an optional byte and writes the adjusted position back. */

struct Ent19C590 {
    char pad00[0x08];
    char sub8[0x40];
    unsigned short h48;
    char pad4A[0x02];
};

struct Tab19C590 {
    char pad00[0x0C];
    struct Ent19C590 *ents;
};

struct Obj19C590 {
    char pad00[0x30];
    float pos30[3];
};

extern int func_0F2FE0(float *pos, float *out);
extern struct Tab19C590 *func_0F1920(void);
extern int func_16B6B0(struct Obj19C590 *o, float *out, float *pos, void *sub);
extern void func_013BC0(float *p, int a, int b, float x);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

int func_16BA48(struct Obj19C590 *o, unsigned char *flag)
{
    float pos[4];
    float out[4];
    int result;
    int idx;

    result = 0;
    Copy3(pos, o->pos30);
    pos[3] = 0.18f;
    idx = func_0F2FE0(pos, out);
    if (idx >= 0) {
        if (func_0F1920()->ents[idx].h48 & 8) {
            result = 1;
            if (flag != 0) {
                *flag = 3;
            }
        } else if (func_16B6B0(o, out, pos, func_0F1920()->ents[idx].sub8) != 0) {
            result = 1;
            if (flag != 0) {
                *flag = 2;
            }
            func_013BC0(o->pos30, 0, 0, 0.2f);
        }
    }
    Copy3(o->pos30, pos);
    return result;
}
