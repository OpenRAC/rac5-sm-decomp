/* LEVEL_02:0x171BC0 -- turns the object's stored table offset into an absolute entry pointer (cleared when the entry has no data), then runs the release helper and reports success. */
extern char *D_0021BD54;
extern void func_040028(void *value);

int func_171BC0(char *obj)
{
    int *slot;
    int off;
    char *entry;

    slot = *(int **)(obj + 0x54);
    off = *slot;
    if (off != 0) {
        entry = D_0021BD54 + off;
        if (*(int *)(entry + 0x40) == 0) {
            *slot = 0;
        } else {
            *slot = (int)entry;
        }
    }
    func_040028(obj);
    return 1;
}
