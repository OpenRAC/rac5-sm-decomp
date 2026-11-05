struct Holder
{
    char pad[0x168];
    int field;
};

extern struct Holder D_002063F8;

void func_056448(int value)
{
    if (D_002063F8.field == 0) D_002063F8.field = value;
}
