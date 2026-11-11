/* LEVEL_07:0x04C738 -- placement copy of LEVEL_01_04C168.c: returns 1 when the next indexed entry exists and its key is not above the global limit. */
extern int func_028F18(void);
extern int func_028350(unsigned int index);
extern char *D_002082AC;
int func_04C738(char *object)
{
    int maximum = func_028F18();
    unsigned int index = *(unsigned int *)(object + 0xFC8);
    int next;
    if (index < (unsigned int)maximum - 1U) {
        next = func_028350(index + 1U);
        if (next != 0) {
            int key = *(int *)((char *)next + 4);
            if (!(*(int *)(D_002082AC + 0x1C74) < key))
                return 1;
        }
    }
    return 0;
}
