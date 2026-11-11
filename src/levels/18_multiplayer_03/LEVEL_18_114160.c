struct Entry
{
    char pad[0x18];
    int value;
};
extern struct Entry D_002DFD38[];

void func_114160(int index)
{
    D_002DFD38[index].value++;
}
