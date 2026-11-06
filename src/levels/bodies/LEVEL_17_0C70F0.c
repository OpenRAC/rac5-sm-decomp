int func_0C70F0(int *ctx, int p2, int p3, int p4, int p5, int p6, int p7)
{
    if (ctx[0x13] != 0) {
        return 0;
    }
    *(unsigned char *)(ctx[0x14] * 0x1C + *ctx) = 1;
    *(int *)(ctx[0x14] * 0x1C + *ctx + 0x0C) = p4;
    *(int *)(ctx[0x14] * 0x1C + *ctx + 0x10) = p5;
    *(int *)(ctx[0x14] * 0x1C + *ctx + 0x14) = p6;
    *(int *)(ctx[0x14] * 0x1C + *ctx + 0x18) = p7;
    *(int *)(ctx[0x14] * 0x1C + *ctx + 0x04) = p2;
    *(int *)(ctx[0x14] * 0x1C + *ctx + 0x08) = p3;
    ctx[0x14] = ctx[0x14] + 1;
    return 1;
}
