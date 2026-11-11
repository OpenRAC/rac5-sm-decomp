/* LEVEL_23:0x0454E8 -- placement copy of LEVEL_01_04C168.c: returns 1 when the next indexed entry exists and its key is not above the global limit. */
extern int func_026748(void);
extern int func_025D48(unsigned int index);
extern char *D_001C73AC;
int func_0454E8(char *object)
{
    int maximum = func_026748();
    unsigned int index = *(unsigned int *)(object + 0xFC8);
    int next;
    if (index < (unsigned int)maximum - 1U) {
        next = func_025D48(index + 1U);
        if (next != 0) {
            int key = *(int *)((char *)next + 4);
            if (!(*(int *)(D_001C73AC + 0x1C74) < key))
                return 1;
        }
    }
    return 0;
}
