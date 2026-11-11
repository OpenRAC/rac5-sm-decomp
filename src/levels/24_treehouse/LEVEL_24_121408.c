extern char *func_11FFB8(char *, int);
extern int func_1075E8(void *p);

int func_121408(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_11FFB8(record, 11);
    if (entry == 0) return 0;
    return func_1075E8(entry + 0xc0);
}
