/* LEVEL_23:0x052C88 -- placement copy of LEVEL_01_059960.c: refreshes a cached record id when enabled, then forwards its two halves. */
extern char *func_052B68(long long);
extern void func_127658(int, int *, int *);
extern void func_052C80(int, int);

void func_052C88(char *record, long long source, int enabled)
{
    int current;
    int values[2];
    if (enabled) {
        char *result = func_052B68(source);
        if (result != 0) {
            *(int *)(record + 0xce8) = *(int *)(result + 4);
        }
    } else {
        *(int *)(record + 0xce8) = 0;
    }
    current = *(int *)(record + 0xce8);
    if (current != 0) {
        int hi;
        func_127658(current, &values[0], &values[1]);
        hi = values[1];
        func_052C80(values[0], hi);
    } else {
        func_052C80(0, 0);
    }
}
