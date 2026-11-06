extern char D_0023FA0C[];
extern void func_088850(char *, void *, void *, long long);

void func_088C08(char *record, int index, long long extra)
{
    char *entry = D_0023FA0C + index * 40;
    func_088850(record, entry + 16, entry, extra);
}
