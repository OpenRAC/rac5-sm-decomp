/* LEVEL_10:0x162618 -- placement copy of LEVEL_01_16B020.c: retained attempt body. */
extern char *func_162C38(void *object);
extern void func_06D618(char *record);

void func_162618(void *object)
{
    char *record = func_162C38(object);
    if (record != 0) {
        func_06D618(record + 4);
        *(int *)(record + 0x40) = 0;
        *(int *)(record + 0x44) = 0;
        *(int *)(record + 0x64) = 0;
        *(int *)(record + 0x68) = 1;
    }
}
