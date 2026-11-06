extern char D_0028418C[];
extern void func_094900(char *, void *, void *, long long);

void func_094CB8(char *record, int index, long long extra)
{
    char *entry = D_0028418C + index * 40;
    func_094900(record, entry + 16, entry, extra);
}
