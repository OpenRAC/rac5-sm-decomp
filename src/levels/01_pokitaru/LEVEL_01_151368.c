struct Holder { char pad[0x498]; int base; char gap[0x1804]; int stride; };
extern struct Holder D_00391B98;

int func_151368(int a, int b)
{
    return D_00391B98.base + (b * D_00391B98.stride + a) * 2;
}
