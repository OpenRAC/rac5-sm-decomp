/* LEVEL:0x07A520 -- follows an owner's primary or fallback pointer to a result word. */
int func_07A520(char *object)
{
    char *owner = *(char **)(object + 0x48);
    char *candidate = *(char **)(owner + 0x18);
    char *next;

    if (candidate == 0) {
        candidate = *(char **)(owner + 0x14);
        if (candidate == 0)
            return -1;
    }
    next = *(char **)candidate;
    return *(int *)(*(char **)next + 4);
}
