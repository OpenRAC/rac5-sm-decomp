/* LEVEL_03:0x04A3C8 -- placement copy of LEVEL_01_04C168.c: returns 1 when the next indexed entry exists and its key is not above the global limit. */
extern int func_0289D0(void);
extern int func_027ED0(unsigned int index);
extern char *D_0020C62C;
int func_04A3C8(char *object)
{
    int maximum = func_0289D0();
    unsigned int index = *(unsigned int *)(object + 0xFC8);
    int next;
    if (index < (unsigned int)maximum - 1U) {
        next = func_027ED0(index + 1U);
        if (next != 0) {
            int key = *(int *)((char *)next + 4);
            if (!(*(int *)(D_0020C62C + 0x1C74) < key))
                return 1;
        }
    }
    return 0;
}
