struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_00268780;

void func_09A1A8(unsigned int bit)
{
    D_00268780.flags &= ~(1u << bit);
}
