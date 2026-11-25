/* LEVEL_21:0x0EEF58 -- placement copy of LEVEL_01_12B130.c: points each node of the object's list back at the object, then relocates its two handles. */
extern int func_0EE2E0(int handle, int mode);
extern int func_0EF018(int value, int mode);
extern int func_0EF6C8(void *value);

void func_0EEF58(char *obj, char *unused)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x51) * 8 + 0x54;
    }
    *(int *)(obj + 4) = func_0EF018(func_0EE2E0(*(int *)(obj + 4), 7), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_0EF6C8((void *)func_0EE2E0(*(int *)(obj + 8), 7));
}
