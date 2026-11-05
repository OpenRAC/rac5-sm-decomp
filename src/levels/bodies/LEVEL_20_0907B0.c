struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_0010CF90[];

void func_0907B0(int index, int input)
{
    D_0010CF90[index].kind = 6;
    D_0010CF90[index].value = input;
}
