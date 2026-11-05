struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_00289640;

void func_09B100(unsigned int bit)
{
    D_00289640.flags &= ~(1u << bit);
}
