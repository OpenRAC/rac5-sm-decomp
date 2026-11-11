/* LEVEL_01:0x11A600 -- intersects a ray with a sphere and returns the hit distance and surface normal. */
extern float sqrtf(float x);

static inline unsigned char Hit(float *tOut, float tmax, float p, float b, float q)
{
    float disc;
    float root;
    float t;

    disc = b * b + p - q;
    if (disc < 0.0f)
        return 0;
    root = sqrtf(disc);
    t = -root - b;
    if (tmax < t)
        return 0;
    if (0.0f <= t) {
        *tOut = t;
        return 1;
    }
    if (b <= root) {
        *tOut = 0.0f;
        return 1;
    }
    return 0;
}

int func_11A600(float *tOut, float *nOut, float *o, float *d, float tmax, float p, float b, float q)
{
    float dx = d[0];
    float dy = d[1];
    float dz = d[2];
    float ox = o[0];
    float oy = o[1];
    float oz = o[2];
    float t;
    float px;
    float py;
    float pz;
    float len2;
    float inv;

    if (!Hit(tOut, tmax, p, b, q))
        return 0;
    t = *tOut;
    px = ox + dx * t;
    py = oy + dy * t;
    pz = oz + dz * t;
    len2 = px * px + py * py + pz * pz;
    if (len2 < 1.0000001111620804e-06f) {
        nOut[0] = 0.0f;
        nOut[1] = 1.0f;
        nOut[2] = 0.0f;
    } else {
        inv = 1.0f / sqrtf(len2);
        nOut[0] = px * inv;
        nOut[1] = py * inv;
        nOut[2] = pz * inv;
    }
    return 1;
}
