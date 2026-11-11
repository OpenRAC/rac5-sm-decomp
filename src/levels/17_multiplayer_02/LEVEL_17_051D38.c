/* LEVEL_17:0x051D38 -- placement copy of LEVEL_01_059960.c: refreshes a cached record id when enabled, then forwards its two halves. */
extern char *func_051C18(long long);
extern void func_125370(int, int *, int *);
extern void func_051D30(int, int);

void func_051D38(char *record, long long source, int enabled)
{
    int current;
    int values[2];
    if (enabled) {
        char *result = func_051C18(source);
        if (result != 0) {
            *(int *)(record + 0xce8) = *(int *)(result + 4);
        }
    } else {
        *(int *)(record + 0xce8) = 0;
    }
    current = *(int *)(record + 0xce8);
    if (current != 0) {
        int hi;
        func_125370(current, &values[0], &values[1]);
        hi = values[1];
        func_051D30(values[0], hi);
    } else {
        func_051D30(0, 0);
    }
}
