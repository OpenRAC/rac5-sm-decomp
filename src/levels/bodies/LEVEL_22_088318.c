extern char D_001EDE8C[];
extern void func_087F60(char *, void *, void *, long long);

void func_088318(char *record, int index, long long extra)
{
    char *entry = D_001EDE8C + index * 40;
    func_087F60(record, entry + 16, entry, extra);
}
