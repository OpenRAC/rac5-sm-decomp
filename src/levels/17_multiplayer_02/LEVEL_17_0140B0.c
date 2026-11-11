/* LEVEL_17:0x0140B0 -- integrates a clamped velocity over a few substeps and tests the result against a limit. */
extern float D_0018E324;

int func_0140B0(float *p, float *x, float *y, float *z, float u, float w,
                float *v, int flag)
{
    int mm[4];
    if (p) {
        p[1] += *y;
    }
    *x += *y;
    if (flag) {
        int *m;
        int cnt;
        float a;
        float b;
        float c;
        a = v[0];
        b = v[1];
        c = v[2];
        mm[1] = 2;
        mm[0] = (int)(D_0018E324 * 59.998802f);
        m = &mm[1];
        if (mm[0] < mm[1]) {
            m = &mm[0];
        }
        cnt = *m;
        if (cnt > 0) {
            do {
                float r = (u - *y) * a - *z * b;
                *z = r;
                if (r > c) {
                    *z = c;
                } else if (r < -c) {
                    *z = -c;
                }
                *y += *z;
            } while (--cnt);
        }
        if (w < *x) {
            return 1;
        }
    } else {
        int *m;
        int cnt;
        float a;
        float b;
        float c;
        u = -u;
        w = -w;
        a = v[0];
        b = v[1];
        c = v[2];
        mm[3] = 2;
        mm[2] = (int)(D_0018E324 * 59.998802f);
        m = &mm[2];
        if (!(mm[2] < mm[3])) {
            m = &mm[3];
        }
        cnt = *m;
        if (cnt > 0) {
            do {
                float r = (u - *y) * a - *z * b;
                *z = r;
                if (r > c) {
                    *z = c;
                } else if (r < -c) {
                    *z = -c;
                }
                *y += *z;
            } while (--cnt);
        }
        if (*x < w) {
            return 1;
        }
    }
    return 0;
}
