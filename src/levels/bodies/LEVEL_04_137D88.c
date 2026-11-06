extern char *func_136938(char *, int);
extern long long func_11BB50(void *);

long long func_137D88(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_136938(record, 11);
    if (entry == 0) return 0;
    return func_11BB50(entry + 0xc0);
}
