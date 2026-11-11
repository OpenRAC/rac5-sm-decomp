struct Entry
{
    char bytes[0xb4];
    int field;
};

extern char *D_0014E5C8;

int func_000F18(int index)
{
    struct Entry *entry = (struct Entry *)(D_0014E5C8 + index * 0x30);
    return entry->field;
}
