struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_001EB730[];

void func_0B1A80(int index, int input)
{
    D_001EB730[index].kind = 6;
    D_001EB730[index].value = input;
}
