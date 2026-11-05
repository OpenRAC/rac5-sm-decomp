struct Holder { char pad[0x498]; int base; char gap[0x1804]; int stride; };
extern struct Holder D_003A90B8;

int func_157BE0(int a, int b)
{
    return D_003A90B8.base + (b * D_003A90B8.stride + a) * 2;
}
