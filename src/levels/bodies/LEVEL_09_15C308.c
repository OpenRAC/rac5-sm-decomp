/* LEVEL_09:0x15C308 -- placement copy of LEVEL_01_16B020.c: retained attempt body. */
extern char *func_15C928(void *object);
extern void func_06B000(char *record);

void func_15C308(void *object)
{
    char *record = func_15C928(object);
    if (record != 0) {
        func_06B000(record + 4);
        *(int *)(record + 0x40) = 0;
        *(int *)(record + 0x44) = 0;
        *(int *)(record + 0x64) = 0;
        *(int *)(record + 0x68) = 1;
    }
}
