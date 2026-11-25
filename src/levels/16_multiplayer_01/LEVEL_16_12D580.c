/* LEVEL_16:0x12D580 -- placement copy of LEVEL_01_148728.c: passes the sub-record of the object's data block to the stub handler and clears the counter of the block's owner. */
extern void func_109040(void);

void func_12D580(char *obj)
{
    char *data;

    data = *(char **)(obj + 0x58);
    ((void (*)(char *))func_109040)(data + 0x2C);
    *(int *)(*(char **)data + 0x5A8) = 0;
}
