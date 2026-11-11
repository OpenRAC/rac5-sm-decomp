extern char *func_130868(char *, int);
extern int func_116930(void *p);

int func_131CB8(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_130868(record, 11);
    if (entry == 0) return 0;
    return func_116930(entry + 0xc0);
}
