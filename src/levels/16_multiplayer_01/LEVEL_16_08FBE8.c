struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_00254410;

void func_08FBE8(unsigned int bit)
{
    D_00254410.flags &= ~(1u << bit);
}
