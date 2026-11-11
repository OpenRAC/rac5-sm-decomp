/* LEVEL_01:0x171728 -- variant P: reciprocal computed before the len copy. */
struct Link {
    char pad00[0x50];
    float k;
};

struct Obj {
    char pad00[0x30];
    float pos[3];
    char pad3C[0x1C];
    struct Link *link;
};

float sqrtf(float);

float func_171728(struct Obj *o, float *target)
{
    float d[3];
    float sum;
    float len;
    float r;
    float inv;
    float k;
    float *p;
    struct Link *lk;

    lk = o->link;
    p = o->pos;
    d[0] = target[0] - o->pos[0];
    d[1] = target[1] - p[1];
    d[2] = target[2] - p[2];
    sum = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (sum < 2.384185791015625e-07f) {
        len = 0.0f;
    } else {
        r = sqrtf(sum);
        inv = 1.0f / r;
        len = r;
        d[0] *= inv;
        d[1] *= inv;
        d[2] *= inv;
    }
    k = lk->k;
    p = o->pos;
    o->pos[0] += d[0] * k;
    p[1] += d[1] * k;
    p[2] += d[2] * k;
    return len;
}
