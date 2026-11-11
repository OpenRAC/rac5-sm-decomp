/* LEVEL_08:0x17FFF0 -- placement copy of LEVEL_01_16B020.c: retained attempt body. */
extern char *func_180610(void *object);
extern void func_073C48(char *record);

void func_17FFF0(void *object)
{
    char *record = func_180610(object);
    if (record != 0) {
        func_073C48(record + 4);
        *(int *)(record + 0x40) = 0;
        *(int *)(record + 0x44) = 0;
        *(int *)(record + 0x64) = 0;
        *(int *)(record + 0x68) = 1;
    }
}
