/* LEVEL_10:0x097BC0 -- placement copy of LEVEL_08_09F780.c. */
extern char D_002A16CC[];
extern void func_097818(long long, void *, void *);

void func_097BC0(long long value, int index)
{
    char *entry = D_002A16CC + index * 40;
    func_097818(value, entry + 16, entry);
}