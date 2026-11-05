struct Holder { char pad[0x498]; int base; char gap[0x1804]; int stride; };
extern struct Holder D_003AC358;

int func_15DAB8(int a, int b)
{
    return D_003AC358.base + (b * D_003AC358.stride + a) * 2;
}
