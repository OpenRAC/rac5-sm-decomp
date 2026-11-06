extern char *func_1072E8(char *, int);
extern long long func_0F1200(void *);

long long func_108748(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_1072E8(record, 11);
    if (entry == 0) return 0;
    return func_0F1200(entry + 0xc0);
}
