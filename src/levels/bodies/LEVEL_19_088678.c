extern char D_0024E88C[];
extern void func_0882C0(char *, void *, void *, long long);

void func_088678(char *record, int index, long long extra)
{
    char *entry = D_0024E88C + index * 40;
    func_0882C0(record, entry + 16, entry, extra);
}
