/* LEVEL_03:0x147BB8 -- placement copy of LEVEL_01_148728.c: passes the sub-record of the object's data block to the stub handler and clears the counter of the block's owner. */
extern void func_12A468(void);

void func_147BB8(char *obj)
{
    char *data;

    data = *(char **)(obj + 0x58);
    ((void (*)(char *))func_12A468)(data + 0x2C);
    *(int *)(*(char **)data + 0x5A8) = 0;
}
