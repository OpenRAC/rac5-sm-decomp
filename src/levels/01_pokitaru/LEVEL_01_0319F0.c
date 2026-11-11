/* LEVEL_01:0x0319F0 -- builds two offset vectors, calls a helper, then compares a value with a sum of two fields. */

int func_111600(float *a, float *b);

int func_0319F0(int unused, float *v, char *s0)
{
    float tmp[8];
    int ret;

    tmp[0] = v[0];
    tmp[1] = v[1] + *(float *)(s0 + 0x20);
    tmp[2] = v[2];
    ret = func_111600(tmp, &tmp[4]);
    if (ret == -1) {
        return 0;
    }
    if (tmp[4] <= *(float *)(s0 + 0x20) + *(float *)(s0 + 0x24)) {
        return 1;
    }
    return 0;
}
