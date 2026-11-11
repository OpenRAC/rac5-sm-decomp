struct Holder { char pad[0x498]; int base; char gap[0x1804]; int stride; };
extern struct Holder D_003A74A8;

int func_154690(int a, int b)
{
    return D_003A74A8.base + (b * D_003A74A8.stride + a) * 2;
}
