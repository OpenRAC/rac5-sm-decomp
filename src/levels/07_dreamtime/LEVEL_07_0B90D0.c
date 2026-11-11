struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_00210BB8[];

void func_0B90D0(int index, int input)
{
    D_00210BB8[index].value = input;
    D_00210BB8[index].kind = 6;
}
