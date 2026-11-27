/* LEVEL_03:0x1957E0 -- runs the setup helper, then for each of five direction vectors stores its length (zero when its squared length is negligible) and normalises it. */
extern float sqrtf(float x);
extern float D_00221458[15];
extern float D_003B1E80[5];

extern void func_0EDFE0(int a);

void func_1957E0(void)
{
    unsigned int i;
    float *p;
    float len2;
    float len;
    float k;
    float r;

    func_0EDFE0(0);
    for (i = 0; i < 5; i++) {
        p = &D_00221458[i * 3];
        len2 = p[0] * p[0] + p[1] * p[1] + p[2] * p[2];
        if (len2 < 2.384185791015625e-07f) {
            len = 0.0f;
        } else {
            r = sqrtf(len2);
            k = 1.0f / r;
            p[0] = p[0] * k;
            p[1] = p[1] * k;
            p[2] = p[2] * k;
            len = r;
        }
        D_003B1E80[i] = len;
    }
}
