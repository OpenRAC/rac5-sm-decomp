/* LEVEL_23:0x15C008 -- placement copy of LEVEL_01_16ABC8.c: releases the two handles stored at +4 of the object's state block. */
extern void func_15C9F0(void *a0);

void func_15C008(char *object)
{
    void **p;
    unsigned int i;

    i = 0;
    p = (void **)(*(char **)(object + 0x58) + 4);
    do {
        func_15C9F0(*p);
        i++;
        p++;
    } while (i < 2);
}
