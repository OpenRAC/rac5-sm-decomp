extern char *func_128720(char *, int);
extern long long func_10E2B0(void *);

long long func_129B70(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_128720(record, 11);
    if (entry == 0) return 0;
    return func_10E2B0(entry + 0xc0);
}
