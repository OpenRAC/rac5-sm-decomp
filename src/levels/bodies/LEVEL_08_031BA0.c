/* LEVEL_08:0x031BA0 -- placement copy of LEVEL_01_0319F0.c: builds two offset vectors, calls a helper, then compares a value with a sum of two fields. */

int func_121DA0(float *a, float *b);

int func_031BA0(int unused, float *v, char *s0)
{
    float tmp[8];
    int ret;

    tmp[0] = v[0];
    tmp[1] = v[1] + *(float *)(s0 + 0x20);
    tmp[2] = v[2];
    ret = func_121DA0(tmp, &tmp[4]);
    if (ret == -1) {
        return 0;
    }
    if (tmp[4] <= *(float *)(s0 + 0x20) + *(float *)(s0 + 0x24)) {
        return 1;
    }
    return 0;
}
