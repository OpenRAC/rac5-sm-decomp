extern char D_0027FA4C[];
extern void *func_0939F8(char *, void *, void *, int);

void *func_093ED8(char *record, int index, int extra)
{
    char *entry = D_0027FA4C + index * 40;
    return func_0939F8(record, entry + 16, entry, extra);
}
