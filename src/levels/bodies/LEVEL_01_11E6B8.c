/* LEVEL_01:0x11E6B8 -- closest point on a segment to the origin in XY; returns squared distance. */
float func_11E6B8(float *outZ, float *outT, float *p, float *q)
{
    float px = p[0], py = p[1], pz = p[2];
    float qx = q[0], qy = q[1], qz = q[2];
    float d0 = qx - px;
    float d1 = qy - py;
    float nd = -(d0 * px + d1 * py);
    float t, x, y;

    if (nd < 2.3841858e-07f) {
        *outZ = pz;
        *outT = 0.0f;
        return px * px + py * py;
    }
    if (d0 * d0 + d1 * d1 < nd) {
        *outZ = qz;
        *outT = 1.0f;
        return qx * qx + qy * qy;
    }
    t = nd / (d0 * d0 + d1 * d1);
    x = px + d0 * t;
    y = py + d1 * t;
    *outZ = pz + (qz - pz) * t;
    *outT = t;
    return x * x + y * y;
}
