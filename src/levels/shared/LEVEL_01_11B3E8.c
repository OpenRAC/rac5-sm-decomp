/* LEVEL_01:0x11B3E8 -- bounding box of a disc of the given radius around a centre offset along a direction, written as min and max corners. */
extern float sqrtf(float x);
extern float fabsf(float x);

void func_11B3E8(float *lo, float *hi, float *c, float *d, float len, float rad)
{
    float x;
    float y;
    float z;
    float h;
    float s;
    float t;
    float ex;
    float ey;
    float ez;
    float px;
    float py;
    float pz;
    float ax;
    float ay;
    float az;
    float bx;
    float by;
    float bz;
    float cx;
    float cy;
    float cz;

    x = d[0];
    y = d[1];
    z = d[2];
    h = x * x + z * z;
    if (h > 1.0000001111620804e-06f) {
        s = rad * (1.0f / sqrtf(h));
        ex = s * (fabsf(z) + fabsf(x * y));
        ey = s * h;
        ez = s * (fabsf(x) + fabsf(y * z));
    } else {
        h = y * y + z * z;
        t = rad * (1.0f / sqrtf(h));
        ex = t * h;
        ey = t * (fabsf(y * x) + fabsf(z));
        ez = t * (fabsf(z * x) + fabsf(y));
    }
    px = x * len;
    py = y * len;
    pz = z * len;
    ax = px - ex;
    ay = py - ey;
    az = pz - ez;
    bx = px + ex;
    by = py + ey;
    bz = pz + ez;
    cx = c[0];
    cy = c[1];
    cz = c[2];
    lo[0] = cx + (ax - fabsf(ax)) * 0.5f;
    lo[1] = cy + (ay - fabsf(ay)) * 0.5f;
    lo[2] = cz + (az - fabsf(az)) * 0.5f;
    hi[0] = cx + (bx + fabsf(bx)) * 0.5f;
    hi[1] = cy + (by + fabsf(by)) * 0.5f;
    hi[2] = cz + (bz + fabsf(bz)) * 0.5f;
}
