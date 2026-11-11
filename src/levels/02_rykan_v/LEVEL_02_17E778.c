/* LEVEL_02:0x17E778 -- placement copy of LEVEL_01_16ABC8.c: releases the two handles stored at +4 of the object's state block. */
extern void func_17F160(void *a0);

void func_17E778(char *object)
{
    void **p;
    unsigned int i;

    i = 0;
    p = (void **)(*(char **)(object + 0x58) + 4);
    do {
        func_17F160(*p);
        i++;
        p++;
    } while (i < 2);
}
