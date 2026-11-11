struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_00215D78[];

void func_0BC878(int index, int input)
{
    D_00215D78[index].value = input;
    D_00215D78[index].kind = 6;
}
