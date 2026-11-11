/* LEVEL_17:0x04F248 -- placement copy of LEVEL_16_04F818.c: picks a child object by index (or a default one) and, unless the owner is in state 5, calls a helper with it and sets a 60.0 limit. */
extern void func_050C98(char *, void *, float);

void func_04F248(char *state)
{
    void *object;
    char *root = *(char **)(state + 0xCA4);
    int index;
    char *table;

    if (root == 0)
        object = 0;
    else {
        index = *(int *)(state + 0xCC8);
        if (index >= 0) {
            table = *(char **)(root + 0x54);
            object = *(void **)(table + (index << 2) + 0x18);
        } else {
            table = *(char **)(root + 0x54);
            object = *(void **)(table + 0x10);
        }
    }
    if (object == 0) {
        return;
    }
    if (*(unsigned short *)(state + 0x108) == 5) {
        return;
    }
    func_050C98(state, object, 0.10000001f);
    *(float *)(state + 0xCD8) = 60.0f;
}
