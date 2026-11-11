struct Item
{
    char pad[0x50];
    int field;
    char tail[4];
};

extern struct Item D_002DFEF8[];

void func_1156F8(int index, int value)
{
    D_002DFEF8[index].field = value;
}
