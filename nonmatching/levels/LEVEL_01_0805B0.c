/* LEVEL_01.REL:0x0805B0: reviewed 312-byte candidate, held for ABI review.
 * Probes the floor under an object, reports the hit height and point, and
 * copies the hit record's position and color.
 * gnu-ee-trial C with gnu-ee-trial links 312/312 bytes and is byte-exact at
 * this and 14 other USA placements, but the prototypes disagree.
 * It declares func_110D08 returning pointer with no arguments, but the
 * accepted LEVEL_01_110D08.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern int func_111600(float *v, float *out);
extern struct Tab *func_110D08(void);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

int func_0805B0(float *p0, float *p1, struct Out *p2, char *o)
{
    float v[4];
    float out[4];
    struct Rec *r;
    int idx;

    Copy3(v, (float *)(o + 0x30));
    v[1] = v[1] + 0.20000000298023224f;
    idx = func_111600(v, out);
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
        r = &func_110D08()->recs[idx];
        p2->pos = r->pos;
        p2->col = r->col;
        p2->on = 1;
    }
    return 1;
}
