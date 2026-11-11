struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_00288780;

void func_09EEE0(unsigned int bit)
{
    D_00288780.flags &= ~(1u << bit);
}
