struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_00245710;

void func_08F0E0(unsigned int bit)
{
    D_00245710.flags &= ~(1u << bit);
}
