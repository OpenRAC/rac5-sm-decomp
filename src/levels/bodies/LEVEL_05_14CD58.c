struct Holder { char pad[0x498]; int base; char gap[0x1804]; int stride; };
extern struct Holder D_0037DA58;

int func_14CD58(int a, int b)
{
    return D_0037DA58.base + (b * D_0037DA58.stride + a) * 2;
}
