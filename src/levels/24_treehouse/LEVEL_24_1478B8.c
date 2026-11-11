struct Holder { char pad[0x498]; int base; char gap[0x1804]; int stride; };
extern struct Holder D_0035DA28;

int func_1478B8(int a, int b)
{
    return D_0035DA28.base + (b * D_0035DA28.stride + a) * 2;
}
