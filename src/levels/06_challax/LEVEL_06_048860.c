/* LEVEL_06:0x048860 -- placement copy of LEVEL_01_04C168.c: returns 1 when the next indexed entry exists and its key is not above the global limit. */
extern int func_026FC0(void);
extern int func_0265A0(unsigned int index);
extern char *D_001E2EAC;
int func_048860(char *object)
{
    int maximum = func_026FC0();
    unsigned int index = *(unsigned int *)(object + 0xFC8);
    int next;
    if (index < (unsigned int)maximum - 1U) {
        next = func_0265A0(index + 1U);
        if (next != 0) {
            int key = *(int *)((char *)next + 4);
            if (!(*(int *)(D_001E2EAC + 0x1C74) < key))
                return 1;
        }
    }
    return 0;
}
