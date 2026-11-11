/* LEVEL_10:0x1A6400 -- copies a source record's transform block and refreshes one derived float. */

extern void func_123D68(char *a, char *b, char *c);

void func_1A6400(char *a0)
{
    char *s0 = *(char **)(a0 + 0x58);
    char *src = *(char **)(s0 + 0x4C);

    if (src != 0) {
        *(float *)(s0 + 0x20) = *(float *)(src + 0x20);
        *(float *)(s0 + 0x24) = *(float *)(src + 0x24);
        *(float *)(s0 + 0x28) = *(float *)(src + 0x28);
        *(float *)(s0 + 0x2C) = *(float *)(src + 0x2C);
        *(float *)(s0 + 0x00) = *(float *)(src + 0x00);
        *(float *)(s0 + 0x04) = *(float *)(src + 0x04);
        *(float *)(s0 + 0x08) = *(float *)(src + 0x08);
        *(float *)(s0 + 0x0C) = *(float *)(src + 0x0C);
        *(float *)(s0 + 0x10) = *(float *)(src + 0x10);
        *(float *)(s0 + 0x14) = *(float *)(src + 0x14);
        *(float *)(s0 + 0x18) = *(float *)(src + 0x18);
        *(float *)(s0 + 0x1C) = *(float *)(src + 0x1C);
        *(float *)(s0 + 0x30) = *(float *)(src + 0x30);
        *(float *)(s0 + 0x34) = *(float *)(src + 0x34);
        *(float *)(s0 + 0x38) = *(float *)(src + 0x38);
        *(float *)(s0 + 0x3C) = *(float *)(src + 0x3C);
        func_123D68(s0 + 0x30, src, s0 + 0x40);
        *(float *)(s0 + 0x34) = *(float *)(s0 + 0x50);
    }
}
