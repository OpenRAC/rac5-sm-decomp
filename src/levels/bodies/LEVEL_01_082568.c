int func_082568(float *a0, float *a1, char *a2)
{
    char *e;
    int r;

    e = *(char **)(a2 + 0x40);
    if (e == 0) {
        r = 0;
    } else {
        char *o = *(char **)(e + 0x10);
        int (*fn)(float *, float *) = *(int (**)(float *, float *))(o + 0x20);

        if (fn == 0) {
            r = 0;
        } else if (*(int *)(a2 + 0x5C) == 0) {
            r = 0;
        } else {
            r = fn(a0, a1);
            if (r != 0) {
                a0[0] -= 0.03125f;
                a0[1] -= 0.03125f;
                a0[2] -= 0.03125f;
                a1[0] += 0.03125f;
                a1[1] += 0.03125f;
                a1[2] += 0.03125f;
            }
        }
    }
    return r;
}
