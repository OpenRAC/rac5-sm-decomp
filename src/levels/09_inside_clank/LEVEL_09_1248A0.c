extern char *func_123450(char *, int);
extern int func_1099D8(void *p);

int func_1248A0(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_123450(record, 11);
    if (entry == 0) return 0;
    return func_1099D8(entry + 0xc0);
}
