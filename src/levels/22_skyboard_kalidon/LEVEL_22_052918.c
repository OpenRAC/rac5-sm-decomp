struct Holder
{
    char pad[0x168];
    int field;
};

extern struct Holder D_0018AB78;

void func_052918(int value)
{
    if (D_0018AB78.field == 0) D_0018AB78.field = value;
}
