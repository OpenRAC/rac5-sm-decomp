/* LEVEL_17:0x156FC0 -- placement copy of LEVEL_16_15DA40.c: remembers the current object and clears the counter and the 100-word table of its data block. */
extern char *D_001B13E8;
extern void *memset(void *, int, unsigned int);

void func_156FC0(char *obj)
{
    char *data;

    D_001B13E8 = obj;
    data = *(char **)(obj + 0x58);
    *(int *)(data + 0x600) = 0;
    memset(data + 0x604, 0, 0x190);
}
