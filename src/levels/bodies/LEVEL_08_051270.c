/* LEVEL_08:0x051270 -- placement copy of LEVEL_01_04C168.c: returns 1 when the next indexed entry exists and its key is not above the global limit. */
extern int func_029150(void);
extern int func_028618(unsigned int index);
extern char *D_0023CB2C;
int func_051270(char *object)
{
    int maximum = func_029150();
    unsigned int index = *(unsigned int *)(object + 0xFC8);
    int next;
    if (index < (unsigned int)maximum - 1U) {
        next = func_028618(index + 1U);
        if (next != 0) {
            int key = *(int *)((char *)next + 4);
            if (!(*(int *)(D_0023CB2C + 0x1C74) < key))
                return 1;
        }
    }
    return 0;
}
