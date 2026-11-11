extern char D_002E754C[];
extern void *func_09F1C0(char *, void *, void *, int);

void *func_09F6B0(char *record, int index, int extra)
{
    char *entry = D_002E754C + index * 40;
    return func_09F1C0(record, entry + 16, entry, extra);
}
