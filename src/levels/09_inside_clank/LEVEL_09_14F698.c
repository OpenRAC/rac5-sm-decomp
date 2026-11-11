/* LEVEL_09:0x14F698 -- placement copy of LEVEL_02_165198.c: unlinks the object's data block from its doubly linked list and releases the attached item. */
extern void func_079108(char *item, int mode);

void func_14F698(char *a0)
{
    char *s0;
    char *v;

    s0 = *(char **)(a0 + 0x58);
    if (*(char **)(s0 + 0x14) != 0) {
        *(int *)*(char **)(s0 + 0x14) = *(int *)s0;
        v = *(char **)s0;
        if (v != 0) {
            *(int *)(v + 0x14) = *(int *)(s0 + 0x14);
        }
        *(int *)(s0 + 0x14) = 0;
    }
    if (*(char **)(s0 + 0x24) != 0) {
        func_079108(*(char **)(s0 + 0x24), 0);
    }
}
