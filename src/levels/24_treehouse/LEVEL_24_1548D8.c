/* LEVEL_24:0x1548D8 -- placement copy of LEVEL_01_16B020.c: retained attempt body. */
extern char *func_154EF8(void *object);
extern void func_067A40(char *record);

void func_1548D8(void *object)
{
    char *record = func_154EF8(object);
    if (record != 0) {
        func_067A40(record + 4);
        *(int *)(record + 0x40) = 0;
        *(int *)(record + 0x44) = 0;
        *(int *)(record + 0x64) = 0;
        *(int *)(record + 0x68) = 1;
    }
}
