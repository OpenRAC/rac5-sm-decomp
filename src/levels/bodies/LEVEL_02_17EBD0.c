/* LEVEL_02:0x17EBD0 -- placement copy of LEVEL_01_16B020.c: retained attempt body. */
extern char *func_17F1F0(void *object);
extern void func_073880(char *record);

void func_17EBD0(void *object)
{
    char *record = func_17F1F0(object);
    if (record != 0) {
        func_073880(record + 4);
        *(int *)(record + 0x40) = 0;
        *(int *)(record + 0x44) = 0;
        *(int *)(record + 0x64) = 0;
        *(int *)(record + 0x68) = 1;
    }
}
