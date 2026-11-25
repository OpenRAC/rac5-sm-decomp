/* LEVEL_09:0x1240C8 -- placement copy of LEVEL_01_12B130.c: points each node of the object's list back at the object, then relocates its two handles. */
extern int func_123450(int handle, int mode);
extern int func_124188(int value, int mode);
extern int func_124838(void *value);

void func_1240C8(char *obj, char *unused)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x51) * 8 + 0x54;
    }
    *(int *)(obj + 4) = func_124188(func_123450(*(int *)(obj + 4), 7), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_124838((void *)func_123450(*(int *)(obj + 8), 7));
}
