/* LEVEL_09:0x048648 -- placement copy of LEVEL_01_04C168.c: returns 1 when the next indexed entry exists and its key is not above the global limit. */
extern int func_027A40(void);
extern int func_026FF8(unsigned int index);
extern char *D_001DDDAC;
int func_048648(char *object)
{
    int maximum = func_027A40();
    unsigned int index = *(unsigned int *)(object + 0xFC8);
    int next;
    if (index < (unsigned int)maximum - 1U) {
        next = func_026FF8(index + 1U);
        if (next != 0) {
            int key = *(int *)((char *)next + 4);
            if (!(*(int *)(D_001DDDAC + 0x1C74) < key))
                return 1;
        }
    }
    return 0;
}
