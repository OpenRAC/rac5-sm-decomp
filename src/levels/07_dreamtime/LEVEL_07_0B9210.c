struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_00210B30[];

void func_0B9210(int index, int input)
{
    D_00210B30[index].kind = 6;
    D_00210B30[index].value = input;
}
