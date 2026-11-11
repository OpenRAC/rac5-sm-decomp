/* LEVEL_18:0x143310 -- placement copy of LEVEL_01_16B020.c: retained attempt body. */
extern char *func_143930(void *object);
extern void func_05D8F8(char *record);

void func_143310(void *object)
{
    char *record = func_143930(object);
    if (record != 0) {
        func_05D8F8(record + 4);
        *(int *)(record + 0x40) = 0;
        *(int *)(record + 0x44) = 0;
        *(int *)(record + 0x64) = 0;
        *(int *)(record + 0x68) = 1;
    }
}
