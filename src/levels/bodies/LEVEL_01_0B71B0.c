struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_001FC830[];

void func_0B71B0(int index, int input)
{
    D_001FC830[index].kind = 6;
    D_001FC830[index].value = input;
}
