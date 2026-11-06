extern char *func_106860(char *, int);
extern long long func_0F0810(void *);

long long func_107CC0(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_106860(record, 11);
    if (entry == 0) return 0;
    return func_0F0810(entry + 0xc0);
}
