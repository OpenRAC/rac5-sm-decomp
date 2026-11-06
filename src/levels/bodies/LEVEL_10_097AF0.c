extern char D_002A16CC[];
extern void func_097610(char *, void *, void *, long long);

void func_097AF0(char *record, int index, long long extra)
{
    char *entry = D_002A16CC + index * 40;
    func_097610(record, entry + 16, entry, extra);
}
