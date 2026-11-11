extern char *func_13B9F0(char *, int);
extern int func_120D88(void *p);

int func_13CE40(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_13B9F0(record, 11);
    if (entry == 0) return 0;
    return func_120D88(entry + 0xc0);
}
