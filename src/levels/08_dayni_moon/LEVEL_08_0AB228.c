struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_002EBB40;

void func_0AB228(unsigned int bit)
{
    D_002EBB40.flags &= ~(1u << bit);
}
