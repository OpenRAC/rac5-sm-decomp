/* LEVEL_01:0x11C830 -- sweeps a point against a vertical capsule: stores the entry distance and the contact normal. */
extern float sqrtf(float x);

static __inline__ unsigned char Entry(float maxT, float ndy, float disc, float *out)
{
    float s;
    float t;

    if (disc < 0.0f) {
        return 0;
    }
    s = sqrtf(disc);
    t = -s - ndy;
    if (maxT < t) {
        return 0;
    }
    if (0.0f <= t) {
        *out = t;
        return 1;
    }
    if (ndy <= s) {
        *out = 0.0f;
        return 1;
    }
    return 0;
}

int func_11C830(float maxT, float r, float h, float *out, float *nrm, float *p, float *c)
{
    float px;
    float py;
    float pz;
    float cx;
    float cy;
    float cz;
    float y;
    float top;
    float dx;
    float dy;
    float dz;
    float ny;
    float ey;
    float d2;
    float e2;
    float inv;

    cx = c[0];
    cz = c[2];
    cy = c[1];
    px = p[0];
    py = p[1];
    pz = p[2];
    if (py < cy) {
        y = cy;
    } else {
        top = cy + h;
        y = (py < top) ? py : top;
    }
    dy = py - y;
    dx = px - cx;
    dz = pz - cz;
    ny = -dy;
    d2 = dx * dx + dy * dy + dz * dz;
    if (!Entry(maxT, ny, ny * ny + r * r - d2, out)) {
        return 0;
    }
    ey = dy - *out;
    e2 = dx * dx + ey * ey + dz * dz;
    if (e2 < 1.0000001e-06f) {
        nrm[0] = 0.0f;
        nrm[1] = 1.0f;
        nrm[2] = 0.0f;
    } else {
        inv = 1.0f / sqrtf(e2);
        nrm[0] = dx * inv;
        nrm[1] = ey * inv;
        nrm[2] = dz * inv;
    }
    return 1;
}
