/* LEVEL_01:0x07CE40 -- follows a linked record, picks an indexed entry and returns a scaled difference, or -1. */

int func_07CE40(char *a0)
{
    char *p1;
    char *p3;
    char *p2;
    char *p4;
    char *entry;
    unsigned char idx;

    p1 = *(char **)(a0 + 0x48);
    p3 = *(char **)(p1 + 0x18);
    if (p3 == 0) {
        p3 = *(char **)(p1 + 0x14);
    }
    if (p3 != 0) {
        idx = (unsigned char)a0[0x44];
        p2 = *(char **)(a0 + 0x40);
        entry = (char *)(idx * 0x34 + *(int *)(p2 + 4));
        p4 = *(char **)(entry + 8);
        return (*(int *)(p3 + 4) - *(int *)p4) >> 6;
    }
    return -1;
}
