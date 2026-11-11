extern char D_002E754C[];
extern void func_09F3C8(long long, void *, void *);

void func_09F780(long long value, int index)
{
    char *entry = D_002E754C + index * 40;
    func_09F3C8(value, entry + 16, entry);
}