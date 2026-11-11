struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_002117F0[];

void func_0BDAC0(int index, int input)
{
    D_002117F0[index].kind = 6;
    D_002117F0[index].value = input;
}
