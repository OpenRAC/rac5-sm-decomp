struct Holder
{
    char pad[0x1a034];
    int field;
};

extern struct Holder D_002A8B58;

void func_0F6388(void)
{
    D_002A8B58.field = 0;
}
