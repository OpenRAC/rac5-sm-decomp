/* LEVEL_07:0x121D68 -- projects a point onto the segment a->b: returns 1 and the closest point when the projection falls inside the segment (clamped to a below it), 0 otherwise. */
extern float sqrtf(float);

typedef struct {
    float x;
    float y;
    float z;
} V3;

int func_121D68(V3 *out, V3 *a, V3 *b, V3 *p)
{
    float d[3];
    float n[3];
    float q[3];
    float len;
    float l2;
    float inv;
    float t;

    d[0] = b->x - a->x;
    d[1] = b->y - a->y;
    d[2] = b->z - a->z;
    l2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (2.384185791015625e-07f < l2) {
        len = sqrtf(l2);
        inv = 1.0f / len;
        n[0] = inv * d[0];
        n[1] = inv * d[1];
        n[2] = inv * d[2];
        q[0] = p->x - a->x;
        q[1] = p->y - a->y;
        q[2] = p->z - a->z;
        t = q[0] * n[0] + q[1] * n[1] + q[2] * n[2];
        if (t < len) {
            if (t < 0.0f) {
                *out = *a;
            } else {
                out->x = a->x + n[0] * t;
                out->y = a->y + n[1] * t;
                out->z = a->z + n[2] * t;
            }
            return 1;
        }
    }
    return 0;
}
