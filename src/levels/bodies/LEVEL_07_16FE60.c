/* LEVEL_07:0x16FE60 -- placement copy of LEVEL_01_16B020.c: retained attempt body. */
extern char *func_170480(void *object);
extern void func_06F280(char *record);

void func_16FE60(void *object)
{
    char *record = func_170480(object);
    if (record != 0) {
        func_06F280(record + 4);
        *(int *)(record + 0x40) = 0;
        *(int *)(record + 0x44) = 0;
        *(int *)(record + 0x64) = 0;
        *(int *)(record + 0x68) = 1;
    }
}
