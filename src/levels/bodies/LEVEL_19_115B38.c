struct Entry
{
    char pad[0x18];
    int value;
};
extern struct Entry D_002DFB38[];

void func_115B38(int index)
{
    D_002DFB38[index].value++;
}
