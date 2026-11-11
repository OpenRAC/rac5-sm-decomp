extern char *func_12A4B8(char *, int);
extern int func_1105E8(void *p);

int func_12B908(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_12A4B8(record, 11);
    if (entry == 0) return 0;
    return func_1105E8(entry + 0xc0);
}
