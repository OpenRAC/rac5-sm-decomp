struct Entry
{
    char pad[0x18];
    int value;
};
extern struct Entry D_002D0CB8[];

void func_114B20(int index)
{
    D_002D0CB8[index].value++;
}
