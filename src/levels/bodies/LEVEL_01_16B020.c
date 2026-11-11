/* LEVEL_01:0x16B020 -- retained attempt body. */
extern char *func_16B640(void *object);
extern void func_06E400(char *record);

void func_16B020(void *object)
{
    char *record = func_16B640(object);
    if (record != 0) {
        func_06E400(record + 4);
        *(int *)(record + 0x40) = 0;
        *(int *)(record + 0x44) = 0;
        *(int *)(record + 0x64) = 0;
        *(int *)(record + 0x68) = 1;
    }
}
