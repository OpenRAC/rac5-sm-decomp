/* LEVEL_01:0x12B130 -- points each node of the object's list back at the object, then relocates its two handles. */
extern int func_12A4B8(int handle, int mode);
extern int func_12B1F0(int value, int mode);
extern int func_12B8A0(void *value);

void func_12B130(char *obj, char *unused)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x51) * 8 + 0x54;
    }
    *(int *)(obj + 4) = func_12B1F0(func_12A4B8(*(int *)(obj + 4), 7), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_12B8A0((void *)func_12A4B8(*(int *)(obj + 8), 7));
}
