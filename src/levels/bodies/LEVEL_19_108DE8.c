extern char *func_107988(char *, int);
extern long long func_0F1848(void *);

long long func_108DE8(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_107988(record, 11);
    if (entry == 0) return 0;
    return func_0F1848(entry + 0xc0);
}
