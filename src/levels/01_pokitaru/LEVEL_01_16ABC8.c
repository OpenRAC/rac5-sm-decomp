/* LEVEL_01:0x16ABC8 -- releases the two handles stored at +4 of the object's state block. */
extern void func_16B5B0(void *a0);

void func_16ABC8(char *object)
{
    void **p;
    unsigned int i;

    i = 0;
    p = (void **)(*(char **)(object + 0x58) + 4);
    do {
        func_16B5B0(*p);
        i++;
        p++;
    } while (i < 2);
}
