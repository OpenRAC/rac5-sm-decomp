struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_001CD538[];

void func_0B0900(int index, int input)
{
    D_001CD538[index].value = input;
    D_001CD538[index].kind = 6;
}
