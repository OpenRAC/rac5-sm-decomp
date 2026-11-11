struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_00151538[];

void func_097580(int index, int input)
{
    D_00151538[index].value = input;
    D_00151538[index].kind = 6;
}
