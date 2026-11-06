extern char D_00171F4C[];
extern void func_0755B0(char *, void *, void *, long long);

void func_075968(char *record, int index, long long extra)
{
    char *entry = D_00171F4C + index * 40;
    func_0755B0(record, entry + 16, entry, extra);
}
