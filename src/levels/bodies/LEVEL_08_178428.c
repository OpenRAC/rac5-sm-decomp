extern void func_1784E0(char *, int);

void func_178428(char *record, unsigned char value)
{
    char *nested = *(char **)(record + 0x58);
    nested[0x16] = value;
    if ((unsigned char)(record[0x45] - 1) < 2)
        func_1784E0(record, 3);
}
