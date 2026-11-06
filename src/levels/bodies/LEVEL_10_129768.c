extern char *func_128318(char *, int);
extern long long func_10E800(void *);

long long func_129768(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_128318(record, 11);
    if (entry == 0) return 0;
    return func_10E800(entry + 0xc0);
}
