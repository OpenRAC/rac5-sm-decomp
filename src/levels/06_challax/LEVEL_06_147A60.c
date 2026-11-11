struct Holder { char pad[0x498]; int base; char gap[0x1804]; int stride; };
extern struct Holder D_0037E918;

int func_147A60(int a, int b)
{
    return D_0037E918.base + (b * D_0037E918.stride + a) * 2;
}
