/* LEVEL_02:0x05E888 -- placement copy of LEVEL_01_059960.c: refreshes a cached record id when enabled, then forwards its two halves. */
extern char *func_05E768(long long);
extern void func_13C278(int, int *, int *);
extern void func_05E880(int, int);

void func_05E888(char *record, long long source, int enabled)
{
    int current;
    int values[2];
    if (enabled) {
        char *result = func_05E768(source);
        if (result != 0) {
            *(int *)(record + 0xce8) = *(int *)(result + 4);
        }
    } else {
        *(int *)(record + 0xce8) = 0;
    }
    current = *(int *)(record + 0xce8);
    if (current != 0) {
        int hi;
        func_13C278(current, &values[0], &values[1]);
        hi = values[1];
        func_05E880(values[0], hi);
    } else {
        func_05E880(0, 0);
    }
}
