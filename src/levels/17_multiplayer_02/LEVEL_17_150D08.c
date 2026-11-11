extern char D_002D63D0[];
extern void func_103708(char *, char *, void *);

void func_150D08(char *record)
{
    if ((unsigned char)record[0x45] == 2)
        func_103708(record, record, D_002D63D0);
}