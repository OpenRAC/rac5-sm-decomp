/* LEVEL_01:0x148728 -- passes the sub-record of the object's data block to the stub handler and clears the counter of the block's owner. */
extern void func_12C200(void);

void func_148728(char *obj)
{
    char *data;

    data = *(char **)(obj + 0x58);
    ((void (*)(char *))func_12C200)(data + 0x2C);
    *(int *)(*(char **)data + 0x5A8) = 0;
}
