struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_002B7740;

void func_0A06B0(unsigned int bit)
{
    D_002B7740.flags &= ~(1u << bit);
}
