/* LEVEL_17:0x143250 -- placement copy of LEVEL_01_16B020.c: retained attempt body. */
extern char *func_143870(void *object);
extern void func_05E7D8(char *record);

void func_143250(void *object)
{
    char *record = func_143870(object);
    if (record != 0) {
        func_05E7D8(record + 4);
        *(int *)(record + 0x40) = 0;
        *(int *)(record + 0x44) = 0;
        *(int *)(record + 0x64) = 0;
        *(int *)(record + 0x68) = 1;
    }
}
