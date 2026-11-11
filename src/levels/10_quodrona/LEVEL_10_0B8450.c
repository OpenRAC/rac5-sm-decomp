struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_00205830[];

void func_0B8450(int index, int input)
{
    D_00205830[index].kind = 6;
    D_00205830[index].value = input;
}
