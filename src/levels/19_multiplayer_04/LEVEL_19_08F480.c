struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_00254590;

void func_08F480(unsigned int bit)
{
    D_00254590.flags &= ~(1u << bit);
}
