struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_00245778[];

void func_0C1F60(int index, int input)
{
    D_00245778[index].value = input;
    D_00245778[index].kind = 6;
}
