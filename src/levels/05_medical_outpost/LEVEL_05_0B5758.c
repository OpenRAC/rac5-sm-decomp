struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_001EBBB0[];

void func_0B5758(int index, int input)
{
    D_001EBBB0[index].kind = 6;
    D_001EBBB0[index].value = input;
}
