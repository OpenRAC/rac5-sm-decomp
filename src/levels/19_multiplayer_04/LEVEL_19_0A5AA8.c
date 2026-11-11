struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_001ABA30[];

void func_0A5AA8(int index, int input)
{
    D_001ABA30[index].kind = 6;
    D_001ABA30[index].value = input;
}
