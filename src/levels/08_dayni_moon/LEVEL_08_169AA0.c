extern int func_036930(int);
extern void func_168D58(char *, int, int);

void func_169AA0(char *record)
{
    if (func_036930(*(int *)(*(char **)(record + 0x58) + 100)) != 0)
        func_168D58(record, (unsigned char)record[0x45], 3);
}
