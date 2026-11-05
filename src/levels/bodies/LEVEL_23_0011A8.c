struct Entry
{
    char bytes[0xb4];
    int field;
};

extern char *D_001C2648;

int func_0011A8(int index)
{
    struct Entry *entry = (struct Entry *)(D_001C2648 + index * 0x30);
    return entry->field;
}
