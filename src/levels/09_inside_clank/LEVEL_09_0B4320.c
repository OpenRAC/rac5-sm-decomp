struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_001E66B8[];

void func_0B4320(int index, int input)
{
    D_001E66B8[index].value = input;
    D_001E66B8[index].kind = 6;
}
