/* LEVEL_03:0x097480 -- placement copy of LEVEL_08_09F780.c. */
extern char D_002B314C[];
extern void func_0970D8(long long, void *, void *);

void func_097480(long long value, int index)
{
    char *entry = D_002B314C + index * 40;
    func_0970D8(value, entry + 16, entry);
}