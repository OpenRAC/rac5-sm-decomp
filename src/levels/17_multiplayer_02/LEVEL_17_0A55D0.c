struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_0019DF38[];

void func_0A55D0(int index, int input)
{
    D_0019DF38[index].value = input;
    D_0019DF38[index].kind = 6;
}
