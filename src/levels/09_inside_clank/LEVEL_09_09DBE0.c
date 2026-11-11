struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_00284040;

void func_09DBE0(unsigned int bit)
{
    D_00284040.flags &= ~(1u << bit);
}
