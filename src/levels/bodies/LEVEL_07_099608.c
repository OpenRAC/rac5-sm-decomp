extern char D_002ADBCC[];
extern void *func_099128(char *, void *, void *, int);

void *func_099608(char *record, int index, int extra)
{
    char *entry = D_002ADBCC + index * 40;
    return func_099128(record, entry + 16, entry, extra);
}
