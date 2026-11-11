struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_00211878[];

void func_0BD980(int index, int input)
{
    D_00211878[index].value = input;
    D_00211878[index].kind = 6;
}
