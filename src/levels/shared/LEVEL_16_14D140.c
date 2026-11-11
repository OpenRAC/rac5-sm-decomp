/* LEVEL_16:0x14D140 -- clears the 0x41C-byte record hanging off the object. */
extern void *memset(void *s, int c, unsigned int n);

void func_14D140(char *object)
{
    memset(*(void **)(object + 0x58), 0, 0x41C);
}
