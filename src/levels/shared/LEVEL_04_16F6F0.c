/* LEVEL_04:0x16F6F0 -- resets the object to state 3 and clears the 32-byte block of its record. */
extern void *memset(void *, int, unsigned int);

int func_16F6F0(char *object)
{
    *(object + 0x45) = 0;
    *(object + 0x46) = 3;
    memset(*(void **)(object + 0x58), 0, 0x20);
    return 1;
}
