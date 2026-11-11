struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_001ABAB8[];

void func_0A5968(int index, int input)
{
    D_001ABAB8[index].value = input;
    D_001ABAB8[index].kind = 6;
}
