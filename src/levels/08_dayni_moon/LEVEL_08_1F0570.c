/* LEVEL_08:0x1F0570 -- placement copy of LEVEL_04_1C73F0.c: unlinks the object's data block from its doubly linked list, clears its state byte and runs the follow-up. */
extern void func_1F0A38(char *object);

void func_1F0570(char *a0)
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
    a0[0x45] = 0;
    func_1F0A38(a0);
}
