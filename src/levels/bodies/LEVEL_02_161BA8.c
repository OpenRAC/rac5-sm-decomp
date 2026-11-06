extern int func_036468(int);
extern void func_160E60(char *, int, int);

void func_161BA8(char *record)
{
    if (func_036468(*(int *)(*(char **)(record + 0x58) + 100)) != 0)
        func_160E60(record, (unsigned char)record[0x45], 3);
}
