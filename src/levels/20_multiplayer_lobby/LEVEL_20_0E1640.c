/* LEVEL_20:0x0E1640 -- placement copy of FRONTEND_01F1A0.c: returns a word from an indexed 8-byte table entry after a count check. */
extern int func_0E17D8(void *);

int func_0E1640(void *object, int index)
{
    if (index == 0) {
        return 0;
    }
    if (func_0E17D8(object) == 0) {
        return 0;
    }
    if (*(int *)((char *)object + 4) < index) {
        return 0;
    }
    return *(int *)(*(char **)object + (index << 3) + 8);
}
