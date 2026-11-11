/* LEVEL_15:0x03DF88 -- placement copy of LEVEL_01_04C168.c: returns 1 when the next indexed entry exists and its key is not above the global limit. */
extern int func_022790(void);
extern int func_021ED0(unsigned int index);
extern char *D_00148C2C;
int func_03DF88(char *object)
{
    int maximum = func_022790();
    unsigned int index = *(unsigned int *)(object + 0xFC8);
    int next;
    if (index < (unsigned int)maximum - 1U) {
        next = func_021ED0(index + 1U);
        if (next != 0) {
            int key = *(int *)((char *)next + 4);
            if (!(*(int *)(D_00148C2C + 0x1C74) < key))
                return 1;
        }
    }
    return 0;
}
