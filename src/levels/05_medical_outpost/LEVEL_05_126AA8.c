/* LEVEL_05:0x126AA8 -- placement copy of LEVEL_01_12B130.c: points each node of the object's list back at the object, then relocates its two handles. */
extern int func_125E30(int handle, int mode);
extern int func_126B68(int value, int mode);
extern int func_127218(void *value);

void func_126AA8(char *obj, char *unused)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x51) * 8 + 0x54;
    }
    *(int *)(obj + 4) = func_126B68(func_125E30(*(int *)(obj + 4), 7), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_127218((void *)func_125E30(*(int *)(obj + 8), 7));
}
