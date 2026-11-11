struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_00254790;

void func_08EC00(unsigned int bit)
{
    D_00254790.flags &= ~(1u << bit);
}
