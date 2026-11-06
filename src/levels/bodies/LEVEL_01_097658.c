extern char D_002982CC[];
extern void func_0972A0(char *, void *, void *, long long);

void func_097658(char *record, int index, long long extra)
{
    char *entry = D_002982CC + index * 40;
    func_0972A0(record, entry + 16, entry, extra);
}
