extern char *func_0EE2E0(char *, int);
extern int func_0D5E28(void *p);

int func_0EF730(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = func_0EE2E0(record, 11);
    if (entry == 0) return 0;
    return func_0D5E28(entry + 0xc0);
}
