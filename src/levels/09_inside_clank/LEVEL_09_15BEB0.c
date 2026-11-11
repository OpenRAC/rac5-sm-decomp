/* LEVEL_09:0x15BEB0 -- placement copy of LEVEL_01_16ABC8.c: releases the two handles stored at +4 of the object's state block. */
extern void func_15C898(void *a0);

void func_15BEB0(char *object)
{
    void **p;
    unsigned int i;

    i = 0;
    p = (void **)(*(char **)(object + 0x58) + 4);
    do {
        func_15C898(*p);
        i++;
        p++;
    } while (i < 2);
}
