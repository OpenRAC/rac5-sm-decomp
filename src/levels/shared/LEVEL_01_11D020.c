/* LEVEL_01:0x11D020 -- tests a vertical segment of length h against a sphere around a point and a limit distance. */

extern float sqrtf(float x);

int func_11D020(float *p, float *q, float lim, float r, float h)
{
    float dx;
    float qx;
    float qy;
    float qz;
    float dy;
    float dz;
    float r2;
    float h2;
    float t;
    float b;
    float c;
    float disc;
    float s;
    float lo;

    qx = q[0];
    qy = q[1];
    qz = q[2];
    dx = p[0] - qx;
    dy = p[1] - qy;
    dz = p[2] - qz;
    r2 = r * r;
    h2 = dx * dx + dz * dz;
    if (dy < 0.0f) {
        t = 0.0f;
    } else if (h < dy) {
        t = h;
    } else {
        if (h2 < r2) {
            return 1;
        }
        return 0;
    }
    b = -t;
    c = h2 + t * t;
    disc = b * b + r2 - c;
    if (disc < 0.0f) {
        return 0;
    }
    s = sqrtf(disc);
    lo = t - s;
    if (lim < lo) {
        return 0;
    }
    if (lo < 0.0f) {
        return 0.0f <= t + s;
    }
    return 1;
}
