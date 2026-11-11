/* LEVEL_23:0x15C460 -- placement copy of LEVEL_01_16B020.c: retained attempt body. */
extern char *func_15CA80(void *object);
extern void func_067BA8(char *record);

void func_15C460(void *object)
{
    char *record = func_15CA80(object);
    if (record != 0) {
        func_067BA8(record + 4);
        *(int *)(record + 0x40) = 0;
        *(int *)(record + 0x44) = 0;
        *(int *)(record + 0x64) = 0;
        *(int *)(record + 0x68) = 1;
    }
}
