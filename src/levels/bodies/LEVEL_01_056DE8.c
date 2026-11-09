/* LEVEL_01:0x056DE8 -- finds the next path point beyond a distance and returns its direction. */
typedef struct { float x, y, z, w; } Pt;
typedef struct { char pad0[4]; Pt *pts; char pad1[0xC]; unsigned short count; } Path;
extern float sqrtf(float);

int func_056DE8(float *out, Path *path, int idx, float thr)
{
    Pt *p, *q, *end;
    float d[3];
    float l2, inv;
    int n, i;

    n = path->count;
    if (idx == n - 1)
        idx = n - 2;
    p = &path->pts[idx];
    q = &path->pts[idx + 1];
    end = &path->pts[n];

    for (;;) {
        d[0] = q->x - p->x;
        d[1] = q->y - p->y;
        d[2] = q->z - p->z;
        l2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
        if (!(l2 < thr))
            break;
        q++;
        if (q == end)
            return 0;
    }
    inv = 1.0f / sqrtf(l2);
    out[0] = inv * d[0];
    out[1] = inv * d[1];
    out[2] = inv * d[2];
    return 1;
}
