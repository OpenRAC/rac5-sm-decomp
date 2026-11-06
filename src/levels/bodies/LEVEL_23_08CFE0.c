extern char D_0026970C[];
extern void func_08CC28(char *, void *, void *, long long);

void func_08CFE0(char *record, int index, long long extra)
{
    char *entry = D_0026970C + index * 40;
    func_08CC28(record, entry + 16, entry, extra);
}
