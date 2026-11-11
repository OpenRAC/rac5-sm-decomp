struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_00214EB0[];

void func_0B6F98(int index, int input)
{
    D_00214EB0[index].kind = 6;
    D_00214EB0[index].value = input;
}
