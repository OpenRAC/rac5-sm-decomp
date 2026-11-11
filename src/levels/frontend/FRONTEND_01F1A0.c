/* FRONTEND:0x01F1A0 -- returns a word from an indexed 8-byte table entry after a count check. */
extern int func_01F338(void *);

int func_01F1A0(void *object, int index)
{
    if (index == 0) {
        return 0;
    }
    if (func_01F338(object) == 0) {
        return 0;
    }
    if (*(int *)((char *)object + 4) < index) {
        return 0;
    }
    return *(int *)(*(char **)object + (index << 3) + 8);
}
