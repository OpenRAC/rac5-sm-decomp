struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_002A5CC0;

void func_0A1A48(unsigned int bit)
{
    D_002A5CC0.flags &= ~(1u << bit);
}
