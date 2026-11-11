/* LEVEL_22:0x072F88 -- placement copy of LEVEL_01_0805B0.c: probes the floor under an object, reports the hit height and point, and copies the hit record's position and color. */
struct Col4 {
    char b[4];
};

struct Vec3 {
    float x;
    float y;
    float z;
};

struct Rec {
    char pad0[8];
    struct Vec3 pos;
    char pad1[0x48 - 0x14];
    struct Col4 col;
};

struct Tab {
    char pad0[0xC];
    struct Rec *recs;
};

struct Out {
    struct Vec3 pos;
    struct Col4 col;
    int pad;
    int on;
};

extern int func_0ED330(float *v, float *out);
extern unsigned int func_0ECA70(void);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

int func_072F88(float *p0, float *p1, struct Out *p2, char *o)
{
    float v[4];
    float out[4];
    struct Rec *r;
    int idx;

    Copy3(v, (float *)(o + 0x30));
    v[1] = v[1] + 0.20000000298023224f;
    idx = func_0ED330(v, out);
    if (idx < 0) {
        return 0;
    }
    out[0] = out[0] - 0.20000000298023224f;
    if (p0) {
        *p0 = out[0];
    }
    if (p1) {
        Copy3(p1, (float *)(o + 0x30));
        p1[1] = p1[1] - out[0];
    }
    if (p2) {
        r = &((struct Tab *)func_0ECA70())->recs[idx];
        p2->pos = r->pos;
        p2->col = r->col;
        p2->on = 1;
    }
    return 1;
}
