/* LEVEL_15:0x0E1500 -- tests two spheres for contact and returns the contact point and normal. */
extern float sqrtf(float x);

int func_0E1500(float *out_t, float *out_p, float *out_n, float *a, float *b, float r1, float r2)
{
    float rs;
    float ax;
    float ay;
    float az;
    float bx;
    float by;
    float bz;
    float dx;
    float dy;
    float dz;
    float d2;
    float dist;
    float inv;
    float nx;
    float ny;
    float nz;
    float px;
    float py;
    float pz;

    rs = r1 + r2;
    rs = rs * rs;
    ax = a[0];
    ay = a[1];
    bx = b[0];
    by = b[1];
    dy = ay - by;
    az = a[2];
    dx = ax - bx;
    bz = b[2];
    dz = az - bz;
    d2 = dx * dx + dy * dy + dz * dz;
    if (rs < d2) {
        return 0;
    }
    if (1.0000001111620804e-06f < d2) {
        dist = sqrtf(d2);
        inv = 1.0f / dist;
        nx = dx * inv;
        ny = dy * inv;
        nz = dz * inv;
        if (r2 * r2 < d2) {
            px = bx + r2 * nx;
            py = by + r2 * ny;
            pz = bz + r2 * nz;
            *out_t = dist - r2;
            out_p[0] = px;
            out_p[1] = py;
            out_p[2] = pz;
        } else {
            *out_t = 0.0f;
            out_p[0] = ax;
            out_p[1] = ay;
            out_p[2] = az;
        }
        out_n[0] = nx;
        out_n[1] = ny;
        out_n[2] = nz;
    } else {
        *out_t = 0.0f;
        out_p[0] = ax;
        out_p[1] = ay;
        out_p[2] = az;
        out_n[2] = 0.0f;
        out_n[0] = 0.0f;
        out_n[1] = 1.0f;
    }
    return 1;
}
