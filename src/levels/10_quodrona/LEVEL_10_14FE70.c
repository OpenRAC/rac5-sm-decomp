struct Holder { char pad[0x498]; int base; char gap[0x1804]; int stride; };
extern struct Holder D_0039AF98;

int func_14FE70(int a, int b)
{
    return D_0039AF98.base + (b * D_0039AF98.stride + a) * 2;
}
