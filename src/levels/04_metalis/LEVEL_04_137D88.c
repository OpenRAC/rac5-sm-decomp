extern char *func_136938(char *, int);
extern int func_11BB50(void *p);

int func_137D88(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_136938(record, 11);
    if (entry == 0) return 0;
    return func_11BB50(entry + 0xc0);
}
