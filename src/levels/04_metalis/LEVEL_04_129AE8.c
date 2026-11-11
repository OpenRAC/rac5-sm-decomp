/* LEVEL_04:0x129AE8 -- pushes a circle out of an oriented box and reports the contact normal. */
typedef struct {
    float ax;
    char pad4[4];
    float az;
    char padc[0x20 - 0xC];
    float bx;
    char pad24[4];
    float bz;
    char pad2c[4];
    float cx;
    char pad34[4];
    float cz;
} Box;

extern float sqrtf(float);
extern float fabsf(float);

int func_129AE8(float *px, float *pz, float *out, Box *m, float *he, float r)
{
    float dx, dz, u, v, du, dv, cu, cv;
    float ex, ez, len, k;
    int outside;
    float h0, h1;
    float cx, cz;

    h0 = he[0];
    h1 = he[1];
    cx = m->cx;
    cz = m->cz;
    dx = *px - cx;
    dz = *pz - cz;
    u = dx * m->ax + dz * m->az;
    v = dx * m->bx + dz * m->bz;
    du = fabsf(u) - h0;
    dv = fabsf(v) - h1;
    if (0.0f < du) {
        outside = 1;
        cu = (u < 0.0f) ? -h0 : h0;
    } else {
        outside = 0;
        cu = u;
    }
    if (0.0f < dv) {
        outside = 1;
        cv = (v < 0.0f) ? -h1 : h1;
    } else {
        cv = v;
    }
    if (!outside) {
        if (dv < du) {
            if (u < 0.0f) {
                cu = -(h0 + r);
                out[0] = -m->ax;
                out[1] = -m->az;
            } else {
                cu = h0 + r;
                out[0] = m->ax;
                out[1] = m->az;
            }
        } else {
            cv = (v < 0.0f) ? -(h1 + r) : h1 + r;
        }
        *px = cx + m->ax * cu + m->bx * cv;
        *pz = cz + m->az * cu + m->bz * cv;
    } else {
        if (r * r <= (cu - u) * (cu - u) + (cv - v) * (cv - v))
            return 0;
        ex = (m->ax * cu + m->bx * cv) - dx;
        ez = (m->az * cu + m->bz * cv) - dz;
        len = sqrtf(ex * ex + ez * ez);
        k = 1.0f - r / len;
        *px = *px + ex * k;
        *pz = *pz + ez * k;
        out[0] = -ex / len;
        out[1] = -ez / len;
    }
    return 1;
}
