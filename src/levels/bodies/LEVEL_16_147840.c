/* LEVEL_16:0x147840 -- placement copy of LEVEL_01_16B020.c: retained attempt body. */
extern char *func_147E60(void *object);
extern void func_05EDE8(char *record);

void func_147840(void *object)
{
    char *record = func_147E60(object);
    if (record != 0) {
        func_05EDE8(record + 4);
        *(int *)(record + 0x40) = 0;
        *(int *)(record + 0x44) = 0;
        *(int *)(record + 0x64) = 0;
        *(int *)(record + 0x68) = 1;
    }
}
