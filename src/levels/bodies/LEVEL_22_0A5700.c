struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_0015BBB0[];

void func_0A5700(int index, int input)
{
    D_0015BBB0[index].kind = 6;
    D_0015BBB0[index].value = input;
}
