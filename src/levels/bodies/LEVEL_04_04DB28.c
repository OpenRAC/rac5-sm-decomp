/* LEVEL_04:0x04DB28 -- placement copy of LEVEL_01_04C168.c: returns 1 when the next indexed entry exists and its key is not above the global limit. */
extern int func_028680(void);
extern int func_027C80(unsigned int index);
extern char *D_0020D12C;
int func_04DB28(char *object)
{
    int maximum = func_028680();
    unsigned int index = *(unsigned int *)(object + 0xFC8);
    int next;
    if (index < (unsigned int)maximum - 1U) {
        next = func_027C80(index + 1U);
        if (next != 0) {
            int key = *(int *)((char *)next + 4);
            if (!(*(int *)(D_0020D12C + 0x1C74) < key))
                return 1;
        }
    }
    return 0;
}
