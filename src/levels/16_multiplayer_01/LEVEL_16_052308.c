/* LEVEL_16:0x052308 -- placement copy of LEVEL_01_059960.c: refreshes a cached record id when enabled, then forwards its two halves. */
extern char *func_0521E8(long long);
extern void func_125938(int, int *, int *);
extern void func_052300(int, int);

void func_052308(char *record, long long source, int enabled)
{
    int current;
    int values[2];
    if (enabled) {
        char *result = func_0521E8(source);
        if (result != 0) {
            *(int *)(record + 0xce8) = *(int *)(result + 4);
        }
    } else {
        *(int *)(record + 0xce8) = 0;
    }
    current = *(int *)(record + 0xce8);
    if (current != 0) {
        int hi;
        func_125938(current, &values[0], &values[1]);
        hi = values[1];
        func_052300(values[0], hi);
    } else {
        func_052300(0, 0);
    }
}
