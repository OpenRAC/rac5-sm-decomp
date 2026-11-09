/* LEVEL_16:0x177928 -- copies one float triple into the record, sets two flag bytes, then copies another triple into a linked record. */

void func_177928(char *a0)
{
    char *a1;
    float *src;
    float *dst;
    char *s;
    float *src2;
    float *dst2;

    a1 = *(char **)(a0 + 0x54);
    dst = (float *)(a0 + 0x30);
    src = *(float **)(*(char **)(a1 + 0x10) + 4);
    *(float *)(a0 + 0x30) = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    a1[0x25] = 1;
    a1[0x30] = 1;
    *(int *)(a1 + 0x28) = 0;
    src2 = *(float **)(*(char **)(a1 + 0x18) + 4);
    s = *(char **)(a1 + 0x0C);
    *(float *)(s + 0x30) = src2[0];
    dst2 = (float *)(s + 0x30);
    dst2[1] = src2[1];
    dst2[2] = src2[2];
}
