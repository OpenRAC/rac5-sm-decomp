extern char *func_125E30(char *, int);
extern long long func_10CA28(void *);

long long func_127280(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_125E30(record, 11);
    if (entry == 0) return 0;
    return func_10CA28(entry + 0xc0);
}
