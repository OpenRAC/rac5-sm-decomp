struct Holder { char pad[0x498]; int base; char gap[0x1804]; int stride; };
extern struct Holder D_00379318;

int func_14A348(int a, int b)
{
    return D_00379318.base + (b * D_00379318.stride + a) * 2;
}
