struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_001F2480;

void func_08EFA8(unsigned int bit)
{
    D_001F2480.flags &= ~(1u << bit);
}
