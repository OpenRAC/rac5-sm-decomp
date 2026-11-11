struct Entry
{
    char pad08[8];
    int kind;
    char pad10[4];
    int value;
    char tail[0x24];
};
extern struct Entry D_001CFC30[];

void func_0ADF78(int index, int input)
{
    D_001CFC30[index].kind = 6;
    D_001CFC30[index].value = input;
}
