struct Entry
{
    char bytes[0xb4];
    int field;
};

extern char *D_0019C14C;

int func_000E10(int index)
{
    struct Entry *entry = (struct Entry *)(D_0019C14C + index * 0x30);
    return entry->field;
}
