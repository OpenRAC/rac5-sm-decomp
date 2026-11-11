/* LEVEL_09:0x093FA8 -- placement copy of LEVEL_08_09F780.c. */
extern char D_0027FA4C[];
extern void func_093C00(long long, void *, void *);

void func_093FA8(long long value, int index)
{
    char *entry = D_0027FA4C + index * 40;
    func_093C00(value, entry + 16, entry);
}