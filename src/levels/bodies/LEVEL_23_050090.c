/* LEVEL_23:0x050090 -- placement copy of LEVEL_01_056D68.c: picks a child object by index (or a default one) and calls a helper with it. */
extern void func_051BD0(float, char *, void *);

void func_050090(char *state)
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
    if (object != 0) {
        func_051BD0(0.10000001f, state, object);
        *(float *)(state + 0xCD8) = 60.0f;
    }
}
