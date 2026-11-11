extern char *func_1010A8(char *, int);
extern int func_0EC350(void *p);

int func_1024F8(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_1010A8(record, 11);
    if (entry == 0) return 0;
    return func_0EC350(entry + 0xc0);
}
