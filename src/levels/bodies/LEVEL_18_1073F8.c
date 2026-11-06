extern char *func_105F98(char *, int);
extern long long func_0EFA38(void *);

long long func_1073F8(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_105F98(record, 11);
    if (entry == 0) return 0;
    return func_0EFA38(entry + 0xc0);
}
