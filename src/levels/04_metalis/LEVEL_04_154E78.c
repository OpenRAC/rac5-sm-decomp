/* LEVEL_04:0x154E78 -- placement copy of LEVEL_01_148728.c: passes the sub-record of the object's data block to the stub handler and clears the counter of the block's owner. */
extern void func_138680(void);

void func_154E78(char *obj)
{
    char *data;

    data = *(char **)(obj + 0x58);
    ((void (*)(char *))func_138680)(data + 0x2C);
    *(int *)(*(char **)data + 0x5A8) = 0;
}
