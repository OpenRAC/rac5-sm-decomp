struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_001514B0[];

void func_0976E0(int index, int input)
{
    D_001514B0[index].kind = 6;
    D_001514B0[index].value = input;
}
