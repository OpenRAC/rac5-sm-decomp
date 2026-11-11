/* LEVEL_18:0x142EB8 -- placement copy of LEVEL_01_16ABC8.c: releases the two handles stored at +4 of the object's state block. */
extern void func_1438A0(void *a0);

void func_142EB8(char *object)
{
    void **p;
    unsigned int i;

    i = 0;
    p = (void **)(*(char **)(object + 0x58) + 4);
    do {
        func_1438A0(*p);
        i++;
        p++;
    } while (i < 2);
}
