/* LEVEL_19:0x1446B8 -- placement copy of LEVEL_01_16B020.c: retained attempt body. */
extern char *func_144CD8(void *object);
extern void func_05E208(char *record);

void func_1446B8(void *object)
{
    char *record = func_144CD8(object);
    if (record != 0) {
        func_05E208(record + 4);
        *(int *)(record + 0x40) = 0;
        *(int *)(record + 0x44) = 0;
        *(int *)(record + 0x64) = 0;
        *(int *)(record + 0x68) = 1;
    }
}
