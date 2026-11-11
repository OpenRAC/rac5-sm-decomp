/* LEVEL_08:0x142F10 -- placement copy of FRONTEND_01F1A0.c: returns a word from an indexed 8-byte table entry after a count check. */
extern int func_1430A8(void *);

int func_142F10(void *object, int index)
{
    if (index == 0) {
        return 0;
    }
    if (func_1430A8(object) == 0) {
        return 0;
    }
    if (*(int *)((char *)object + 4) < index) {
        return 0;
    }
    return *(int *)(*(char **)object + (index << 3) + 8);
}
