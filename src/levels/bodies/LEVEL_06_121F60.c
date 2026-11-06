extern char *func_120B10(char *, int);
extern long long func_106BB8(void *);

long long func_121F60(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_120B10(record, 11);
    if (entry == 0) return 0;
    return func_106BB8(entry + 0xc0);
}
