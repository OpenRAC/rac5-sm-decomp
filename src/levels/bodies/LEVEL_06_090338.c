extern char D_0028504C[];
extern void func_08FE58(char *, void *, void *, long long);

void func_090338(char *record, int index, long long extra)
{
    char *entry = D_0028504C + index * 40;
    func_08FE58(record, entry + 16, entry, extra);
}
