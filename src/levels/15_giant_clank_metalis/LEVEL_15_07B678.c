extern char D_001B030C[];
extern void func_07B2D0(long long, void *, void *);

void func_07B678(long long value, int index)
{
    char *entry = D_001B030C + index * 40;
    func_07B2D0(value, entry + 16, entry);
}