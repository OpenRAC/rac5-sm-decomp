struct Entry
{
    char bytes[0xb4];
    int field;
};

extern char *D_000FD3B4;

int func_000D60(int index)
{
    struct Entry *entry = (struct Entry *)(D_000FD3B4 + index * 0x30);
    return entry->field;
}
