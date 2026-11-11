/* LEVEL_24:0x090650 -- placement copy of LEVEL_08_09F780.c. */
extern char D_0026418C[];
extern void func_0902A8(long long, void *, void *);

void func_090650(long long value, int index)
{
    char *entry = D_0026418C + index * 40;
    func_0902A8(value, entry + 16, entry);
}