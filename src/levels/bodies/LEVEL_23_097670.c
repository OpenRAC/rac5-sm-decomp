struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_0026DD00;

void func_097670(unsigned int bit)
{
    D_0026DD00.flags &= ~(1u << bit);
}
