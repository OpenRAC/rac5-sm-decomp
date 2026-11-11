/* LEVEL_03:0x1661C0 -- placement copy of LEVEL_01_16ABC8.c: releases the two handles stored at +4 of the object's state block. */
extern void func_166BA8(void *a0);

void func_1661C0(char *object)
{
    void **p;
    unsigned int i;

    i = 0;
    p = (void **)(*(char **)(object + 0x58) + 4);
    do {
        func_166BA8(*p);
        i++;
        p++;
    } while (i < 2);
}
