/* LEVEL_01:0x135910 -- makes the given zero-terminated word list the object's current list (+0x24) with its length (+0x28, below 0x40); the null list clears both unless the object is in mode 1, and the list that is already current succeeds at once. */
int func_135910(char *object, int *list)
{
    unsigned int n;
    int *p;

    if (list == *(int **)(object + 0x24)) {
        return 1;
    }
    if (list != 0) {
        n = 0;
        if (*list != 0) {
            p = list;
            do {
                n++;
                if (n >= 0x40) {
                    goto fail;
                }
                p++;
            } while (*p != 0);
        }
        if (n < 0x40) {
            *(int **)(object + 0x24) = list;
            *(unsigned int *)(object + 0x28) = n;
            return 1;
        }
        goto fail;
    }
    if (*(int *)(object + 0x30) == 1) {
        goto fail;
    }
    *(int *)(object + 0x24) = 0;
    *(int *)(object + 0x28) = 0;
    return 1;
fail:
    return 0;
}
