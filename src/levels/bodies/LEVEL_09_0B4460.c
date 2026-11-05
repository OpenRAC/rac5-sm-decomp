struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_001E6630[];

void func_0B4460(int index, int input)
{
    D_001E6630[index].kind = 6;
    D_001E6630[index].value = input;
}
