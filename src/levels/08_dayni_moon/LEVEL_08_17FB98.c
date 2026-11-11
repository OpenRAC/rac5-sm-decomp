/* LEVEL_08:0x17FB98 -- placement copy of LEVEL_01_16ABC8.c: releases the two handles stored at +4 of the object's state block. */
extern void func_180580(void *a0);

void func_17FB98(char *object)
{
    void **p;
    unsigned int i;

    i = 0;
    p = (void **)(*(char **)(object + 0x58) + 4);
    do {
        func_180580(*p);
        i++;
        p++;
    } while (i < 2);
}
