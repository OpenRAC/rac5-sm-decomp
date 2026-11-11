/* LEVEL_03:0x11FDF0 -- builds two random unit vectors perpendicular to an axis. */
extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);

void func_11FDF0(float *o1, float *o2, float *n)
{
    float theta;
    float c;
    float s;
    float a;
    float b;
    float nx;
    float ny;
    float nz;
    float len2;
    float inv;
    float inv2;
    float t1;
    float t2;

    theta = (float)rand() * 2.92583624e-09f - 3.14159274f;
    c = cosf(theta);
    s = sqrtf(1.0f - c * c);
    if (theta < 0.0f)
        s = -s;
    nz = n[2];
    a = s;
    nx = n[0];
    b = c;
    len2 = nx * nx + nz * nz;
    ny = n[1];
    if (len2 > 2.38418579e-07f) {
        inv = 1.0f / sqrtf(len2);
        t1 = ny * nx;
        t2 = ny * nz;
        a = a * inv;
        b = b * inv;
        o1[0] = b * nz - a * t1;
        o1[2] = -a * t2 - b * nx;
        o1[1] = a * len2;
        o2[0] = -a * nz - b * t1;
        o2[1] = b * len2;
        o2[2] = a * nx - b * t2;
    } else {
        len2 = ny * ny + nz * nz;
        inv2 = 1.0f / sqrtf(len2);
        a = s * inv2;
        b = c * inv2;
        o1[1] = a * nz - b * (nx * ny);
        o1[2] = -a * ny - b * (nx * nz);
        o1[0] = b * len2;
        o2[0] = -a * len2;
        o2[1] = a * (nx * ny) + b * nz;
        o2[2] = a * (nx * nz) - b * ny;
    }
}
