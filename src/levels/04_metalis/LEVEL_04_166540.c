/* LEVEL_04:0x166540 -- placement copy of LEVEL_02_171BC0.c: turns the object's stored table offset into an absolute entry pointer (cleared when the entry has no data), then runs the release helper and reports success. */
extern char *D_002201B4;
extern void func_03CBC0(void *value);

int func_166540(char *obj)
{
    int *slot;
    int off;
    char *entry;

    slot = *(int **)(obj + 0x54);
    off = *slot;
    if (off != 0) {
        entry = D_002201B4 + off;
        if (*(int *)(entry + 0x40) == 0) {
            *slot = 0;
        } else {
            *slot = (int)entry;
        }
    }
    func_03CBC0(obj);
    return 1;
}
