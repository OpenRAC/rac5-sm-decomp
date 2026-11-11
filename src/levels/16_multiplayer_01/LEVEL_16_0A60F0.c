struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_001AA938[];

void func_0A60F0(int index, int input)
{
    D_001AA938[index].value = input;
    D_001AA938[index].kind = 6;
}
