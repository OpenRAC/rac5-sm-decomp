extern char D_0024E70C[];
extern void func_087E10(char *, void *, void *, long long);

void func_0881C8(char *record, int index, long long extra)
{
    char *entry = D_0024E70C + index * 40;
    func_087E10(record, entry + 16, entry, extra);
}
