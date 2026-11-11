/* LEVEL_01:0x11D9C0 -- pushes a point out of a vertical capsule when it overlaps; returns nonzero if it moved. */

extern float sqrtf(float x);

int func_11D9C0(float *p, float *q, float r1, float r2, float h)
{
    float px;
    float py;
    float pz;
    float qx;
    float qy;
    float qz;
    float dx;
    float dy;
    float dz;
    float rs;
    float d2;
    float s;

    pz = p[2];
    py = p[1];
    px = p[0];
    qz = q[2];
    qy = q[1];
    qx = q[0];
    dz = pz - qz;
    dy = py - qy;
    dx = px - qx;
    if (dy > h) {
        qy = qy + h;
        dy = dy - h;
    } else if (dy > 0.0f) {
        qy = py;
        dy = 0.0f;
    }
    rs = r1 + r2;
    d2 = dx * dx + dy * dy + dz * dz;
    if (rs * rs <= d2) {
        return 0;
    }
    if (d2 < 0.001f * 0.001f) {
        p[2] = pz + rs;
    } else {
        s = rs * (1.0f / sqrtf(d2));
        p[0] = qx + dx * s;
        p[1] = qy + dy * s;
        p[2] = qz + dz * s;
    }
    return 1;
}
