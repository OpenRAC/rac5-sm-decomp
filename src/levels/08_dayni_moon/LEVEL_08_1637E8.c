struct Holder { char pad[0x498]; int base; char gap[0x1804]; int stride; };
extern struct Holder D_003E0EA8;

int func_1637E8(int a, int b)
{
    return D_003E0EA8.base + (b * D_003E0EA8.stride + a) * 2;
}
