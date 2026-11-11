/* LEVEL_24:0x154480 -- placement copy of LEVEL_01_16ABC8.c: releases the two handles stored at +4 of the object's state block. */
extern void func_154E68(void *a0);

void func_154480(char *object)
{
    void **p;
    unsigned int i;

    i = 0;
    p = (void **)(*(char **)(object + 0x58) + 4);
    do {
        func_154E68(*p);
        i++;
        p++;
    } while (i < 2);
}
