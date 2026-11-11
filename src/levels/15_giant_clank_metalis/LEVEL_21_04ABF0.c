/* LEVEL_21:0x04ABF0 -- placement copy of LEVEL_01_059960.c: refreshes a cached record id when enabled, then forwards its two halves. */
extern char *func_04AAD0(long long);
extern void func_0F4D78(int, int *, int *);
extern void func_04ABE8(int, int);

void func_04ABF0(char *record, long long source, int enabled)
{
    int current;
    int values[2];
    if (enabled) {
        char *result = func_04AAD0(source);
        if (result != 0) {
            *(int *)(record + 0xce8) = *(int *)(result + 4);
        }
    } else {
        *(int *)(record + 0xce8) = 0;
    }
    current = *(int *)(record + 0xce8);
    if (current != 0) {
        int hi;
        func_0F4D78(current, &values[0], &values[1]);
        hi = values[1];
        func_04ABE8(values[0], hi);
    } else {
        func_04ABE8(0, 0);
    }
}
