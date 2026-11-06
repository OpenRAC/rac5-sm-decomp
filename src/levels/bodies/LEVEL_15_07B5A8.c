extern char D_001B030C[];
extern void func_07B0C8(char *, void *, void *, long long);

void func_07B5A8(char *record, int index, long long extra)
{
    char *entry = D_001B030C + index * 40;
    func_07B0C8(record, entry + 16, entry, extra);
}
