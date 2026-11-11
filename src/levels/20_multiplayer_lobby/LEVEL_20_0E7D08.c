struct Entry
{
    char pad[0x18];
    int value;
};
extern struct Entry D_00202F10[];

void func_0E7D08(int index)
{
    D_00202F10[index].value++;
}
