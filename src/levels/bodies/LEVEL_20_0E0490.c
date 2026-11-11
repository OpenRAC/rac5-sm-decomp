extern char *func_0DF030(char *, int);
extern int func_0CB3E0(void *p);

int func_0E0490(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_0DF030(record, 11);
    if (entry == 0) return 0;
    return func_0CB3E0(entry + 0xc0);
}
