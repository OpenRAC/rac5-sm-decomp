/* LEVEL_19:0x144260 -- placement copy of LEVEL_01_16ABC8.c: releases the two handles stored at +4 of the object's state block. */
extern void func_144C48(void *a0);

void func_144260(char *object)
{
    void **p;
    unsigned int i;

    i = 0;
    p = (void **)(*(char **)(object + 0x58) + 4);
    do {
        func_144C48(*p);
        i++;
        p++;
    } while (i < 2);
}
