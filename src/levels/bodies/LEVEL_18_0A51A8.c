struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_001ABD30[];

void func_0A51A8(int index, int input)
{
    D_001ABD30[index].kind = 6;
    D_001ABD30[index].value = input;
}
