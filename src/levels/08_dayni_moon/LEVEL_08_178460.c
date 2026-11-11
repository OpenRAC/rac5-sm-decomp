/* LEVEL_08:0x178460 -- stores a byte into the nested block and, for two flag values, calls a helper. */
extern void func_1784E0(char *, int);

void func_178460(char *record, unsigned char value)
{
    char *nested = *(char **)(record + 0x58);
    unsigned char flag;
    nested[0x16] = value;
    flag = *(unsigned char *)(record + 0x45);
    if (flag == 0 || flag == 3)
        func_1784E0(record, 2);
}
