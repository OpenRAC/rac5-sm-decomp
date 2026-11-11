float cosf(float);
float sqrtf(float);

void func_104BA0(int *a0, int a1)
{
    int *end;
    int *q;
    int *r;
    int *np;
    unsigned int k;

    a0 += 6;
    end = a0 + a1 * 16;
    while (a0 != end) {
        k = 0;
        np = a0 + 16;
        q = a0;
        r = q + 12;
        for (; k < 2; k++) {
            float x = *(float *)q;
            float c = cosf(x);
            float t = sqrtf(1.0f - c * c);

            if (x < 0.0f)
                t = -t;
            *(float *)(r + 1) = t;
            *(float *)r = c;
            q += 3;
            r += 2;
        }
        a0 = np;
    }
}
