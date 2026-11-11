struct Entry
{
    char pad[0x18];
    int value;
};
extern struct Entry D_002DF9B8[];

void func_1153C0(int index)
{
    D_002DF9B8[index].value++;
}
