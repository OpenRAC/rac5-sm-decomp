struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_0029C8C0;

void func_0A0928(unsigned int bit)
{
    D_0029C8C0.flags &= ~(1u << bit);
}
