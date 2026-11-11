extern char D_0028418C[];
extern void *func_094900(char *, void *, void *, int);

void *func_094CB8(char *record, int index, int extra)
{
    char *entry = D_0028418C + index * 40;
    return func_094900(record, entry + 16, entry, extra);
}
