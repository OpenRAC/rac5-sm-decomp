struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_001B4900;

void func_081290(unsigned int bit)
{
    D_001B4900.flags &= ~(1u << bit);
}
