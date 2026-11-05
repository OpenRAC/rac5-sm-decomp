struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_00214F38[];

void func_0B6E58(int index, int input)
{
    D_00214F38[index].value = input;
    D_00214F38[index].kind = 6;
}
