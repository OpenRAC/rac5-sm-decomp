extern void func_17F710(char *, int);

void func_17F690(char *record)
{
    if (*(unsigned char *)(record + 0x45) != 0)
        func_17F710(record, 2);
}
