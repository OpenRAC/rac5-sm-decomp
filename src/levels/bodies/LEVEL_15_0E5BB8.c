/* LEVEL_15:0x0E5BB8 -- turns a direction vector toward a target with a damped angular rate. */
typedef struct {
    float x, y, z;
} Vec3;

extern float sqrtf(float x);
extern float atan2f(float y, float x);
extern float cosf(float x);
extern void func_0ED2D0(Vec3 *cur, Vec3 *tgt, Vec3 *axis, float s, float c);

void func_0E5BB8(Vec3 *cur, float *state, Vec3 *tgt, float a, float b)
{
    Vec3 c;
    Vec3 axis;
    float len, inv, dot, ang, t, w, cs, sn;

    c.x = tgt->y * cur->z - tgt->z * cur->y;
    c.y = tgt->z * cur->x - tgt->x * cur->z;
    c.z = tgt->x * cur->y - tgt->y * cur->x;
    len = c.x * c.x + c.y * c.y + c.z * c.z;
    if (len < 1.0000001e-06f) {
        state[0] = 0.0f;
        *cur = *tgt;
        return;
    }
    len = sqrtf(len);
    dot = tgt->x * cur->x + tgt->y * cur->y + tgt->z * cur->z;
    ang = atan2f(len, dot);
    t = (state[0] + ang * a) * b;
    w = t + ang * b;
    state[0] = t - w * a;
    if (w < 0.0f) {
        state[0] = 0.0f;
        *cur = *tgt;
        return;
    }
    inv = 1.0f / len;
    axis.x = inv * c.x;
    axis.y = inv * c.y;
    axis.z = inv * c.z;
    cs = cosf(w);
    sn = sqrtf(1.0f - cs * cs);
    func_0ED2D0(cur, tgt, &axis, sn, cs);
}
