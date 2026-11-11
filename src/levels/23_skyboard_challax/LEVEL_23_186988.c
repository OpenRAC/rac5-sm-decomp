/* LEVEL_23:0x186988 -- runs func_1869B8 on the record when its state byte is 1. */
extern void func_1869B8(void *);

void func_186988(char *record)
{
    if ((unsigned char)record[0x45] == 1)
        func_1869B8(record);
}
