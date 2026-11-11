/* LEVEL_16:0x15DA40 -- remembers the current object and clears the counter and the 100-word table of its data block. */
extern char *D_001BDDE0;
extern void *memset(void *, int, unsigned int);

void func_15DA40(char *obj)
{
    char *data;

    D_001BDDE0 = obj;
    data = *(char **)(obj + 0x58);
    *(int *)(data + 0x600) = 0;
    memset(data + 0x604, 0, 0x190);
}
