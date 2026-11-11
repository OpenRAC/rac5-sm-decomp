struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_0010D018[];

void func_090670(int index, int input)
{
    D_0010D018[index].value = input;
    D_0010D018[index].kind = 6;
}
