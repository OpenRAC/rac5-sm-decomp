struct Holder { char pad[0x498]; int base; char gap[0x1804]; int stride; };
extern struct Holder D_003ACA68;

int func_1507F8(int a, int b)
{
    return D_003ACA68.base + (b * D_003ACA68.stride + a) * 2;
}
