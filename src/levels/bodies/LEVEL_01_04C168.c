/* LEVEL_01:0x04C168 -- returns 1 when the next indexed entry exists and its key is not above the global limit. */
extern int func_028BD8(void);
extern int func_027FF0(unsigned int index);
extern char *D_001F3FAC;
int func_04C168(char *object)
{
    int maximum = func_028BD8();
    unsigned int index = *(unsigned int *)(object + 0xFC8);
    int next;
    if (index < (unsigned int)maximum - 1U) {
        next = func_027FF0(index + 1U);
        if (next != 0) {
            int key = *(int *)((char *)next + 4);
            if (!(*(int *)(D_001F3FAC + 0x1C74) < key))
                return 1;
        }
    }
    return 0;
}
