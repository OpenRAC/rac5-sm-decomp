/* LEVEL_04:0x11EB80 -- placement copy of LEVEL_01_113618.c: tests whether a point, expressed in the scaled frame of a matrix, hits a box and then the box's sub-records. */
extern float sqrtf(float x);

typedef struct Rec {
    char pad_00[0x4C];
} Rec;

typedef struct Box {
    char pad_00[4];
    unsigned int count;
    int w;
    Rec *recs;
    char pad_10[0x24];
    float min[3];
    float max[3];
} Box;

extern int func_126588(float scale, float *local, float *center, float *ext);
extern int func_11E830(Rec *rec, int w, float *local, float scale);

static __inline__ void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

static __inline__ float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

static __inline__ void Mid(float *c, float *e, float *lo, float *hi)
{
    float x;
    float y;
    float z;

    x = (lo[0] + hi[0]) * 0.5f;
    y = (lo[1] + hi[1]) * 0.5f;
    z = (lo[2] + hi[2]) * 0.5f;
    c[0] = x;
    c[1] = y;
    c[2] = z;
    e[0] = hi[0] - x;
    e[1] = hi[1] - y;
    e[2] = hi[2] - z;
}

int func_11EB80(float scale, float *pos, Box *box, float *m)
{
    float d[4];
    float local[4];
    float center[4];
    float ext[4];
    float inv;
    float inv2;
    float sf;
    Rec *r;
    Rec *end;
    int w;

    inv = 1.0f / sqrtf(Dot3(m, m));
    Sub3(d, pos, &m[12]);
    inv2 = inv * inv;
    local[0] = Dot3(d, m) * inv2;
    local[1] = Dot3(d, &m[4]) * inv2;
    local[2] = Dot3(d, &m[8]) * inv2;
    Mid(center, ext, box->min, box->max);
    sf = scale * inv;
    if ((unsigned char)func_126588(sf, local, center, ext) == 0) {
        return 0;
    }
    r = box->recs;
    end = r + box->count;
    w = box->w;
    for (; r != end; r++) {
        if (func_11E830(r, w, local, sf) != 0) {
            return 1;
        }
    }
    return 0;
}
