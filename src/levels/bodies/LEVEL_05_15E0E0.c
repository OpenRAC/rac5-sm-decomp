/* LEVEL_05:0x15E0E0 -- placement copy of LEVEL_01_16B020.c: retained attempt body. */
extern char *func_15E700(void *object);
extern void func_06C068(char *record);

void func_15E0E0(void *object)
{
    char *record = func_15E700(object);
    if (record != 0) {
        func_06C068(record + 4);
        *(int *)(record + 0x40) = 0;
        *(int *)(record + 0x44) = 0;
        *(int *)(record + 0x64) = 0;
        *(int *)(record + 0x68) = 1;
    }
}
