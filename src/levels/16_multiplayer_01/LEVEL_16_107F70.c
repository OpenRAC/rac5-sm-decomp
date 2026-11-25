/* LEVEL_16:0x107F70 -- placement copy of LEVEL_01_12B130.c: points each node of the object's list back at the object, then relocates its two handles. */
extern int func_1072E8(int handle, int mode);
extern int func_108030(int value, int mode);
extern int func_1086E0(void *value);

void func_107F70(char *obj, char *unused)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x51) * 8 + 0x54;
    }
    *(int *)(obj + 4) = func_108030(func_1072E8(*(int *)(obj + 4), 7), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_1086E0((void *)func_1072E8(*(int *)(obj + 8), 7));
}
