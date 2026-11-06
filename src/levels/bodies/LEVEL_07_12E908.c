extern char *func_12D4B8(char *, int);
extern long long func_113638(void *);

long long func_12E908(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_12D4B8(record, 11);
    if (entry == 0) return 0;
    return func_113638(entry + 0xc0);
}
