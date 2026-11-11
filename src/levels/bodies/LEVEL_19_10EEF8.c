/* LEVEL_19:0x10EEF8 -- placement copy of FRONTEND_01F1A0.c: returns a word from an indexed 8-byte table entry after a count check. */
extern int func_10F090(void *);

int func_10EEF8(void *object, int index)
{
    if (index == 0) {
        return 0;
    }
    if (func_10F090(object) == 0) {
        return 0;
    }
    if (*(int *)((char *)object + 4) < index) {
        return 0;
    }
    return *(int *)(*(char **)object + (index << 3) + 8);
}
