extern char D_002B2ACC[];
extern void func_09A398(char *, void *, void *, long long);

void func_09A760(char *record, int index, long long extra)
{
    char *entry = D_002B2ACC + index * 40;
    func_09A398(record, entry + 16, entry, extra);
}
