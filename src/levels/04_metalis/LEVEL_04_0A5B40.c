struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_002B70C0;

void func_0A5B40(unsigned int bit)
{
    D_002B70C0.flags &= ~(1u << bit);
}
