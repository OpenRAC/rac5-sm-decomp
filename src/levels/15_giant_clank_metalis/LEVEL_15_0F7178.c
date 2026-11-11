struct Holder
{
    char pad[0x44160];
    int field;
};

extern struct Holder D_002A8B58;

int func_0F7178(int value)
{
    return D_002A8B58.field + value;
}
