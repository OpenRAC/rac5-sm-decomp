extern char *func_11B330(char *, int);
extern int func_102E10(void *p);

int func_11C780(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_11B330(record, 11);
    if (entry == 0) return 0;
    return func_102E10(entry + 0xc0);
}
