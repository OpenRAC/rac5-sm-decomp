struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_00177C50;

void func_07A2E8(unsigned int bit)
{
    D_00177C50.flags &= ~(1u << bit);
}
