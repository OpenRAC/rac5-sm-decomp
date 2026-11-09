/* LEVEL_05:0x057538 -- placement copy of LEVEL_01_059960.c: refreshes a cached record id when enabled, then forwards its two halves. */
extern char *func_057418(long long);
extern void func_131848(int, int *, int *);
extern void func_057530(int, int);

void func_057538(char *record, long long source, int enabled)
{
    int current;
    int values[2];
    if (enabled) {
        char *result = func_057418(source);
        if (result != 0) {
            *(int *)(record + 0xce8) = *(int *)(result + 4);
        }
    } else {
        *(int *)(record + 0xce8) = 0;
    }
    current = *(int *)(record + 0xce8);
    if (current != 0) {
        int hi;
        func_131848(current, &values[0], &values[1]);
        hi = values[1];
        func_057530(values[0], hi);
    } else {
        func_057530(0, 0);
    }
}
