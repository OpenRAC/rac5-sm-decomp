/* LEVEL_06:0x15A378 -- placement copy of LEVEL_01_16B020.c: retained attempt body. */
extern char *func_15A998(void *object);
extern void func_06B1C0(char *record);

void func_15A378(void *object)
{
    char *record = func_15A998(object);
    if (record != 0) {
        func_06B1C0(record + 4);
        *(int *)(record + 0x40) = 0;
        *(int *)(record + 0x44) = 0;
        *(int *)(record + 0x64) = 0;
        *(int *)(record + 0x68) = 1;
    }
}
