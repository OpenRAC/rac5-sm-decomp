/* LEVEL_01:0x059960 -- refreshes a cached record id when enabled, then forwards its two halves. */
extern char *func_059840(long long);
extern void func_135EC8(int, int *, int *);
extern void func_059958(int, int);

void func_059960(char *record, long long source, int enabled)
{
    int current;
    int values[2];
    if (enabled) {
        char *result = func_059840(source);
        if (result != 0) {
            *(int *)(record + 0xce8) = *(int *)(result + 4);
        }
    } else {
        *(int *)(record + 0xce8) = 0;
    }
    current = *(int *)(record + 0xce8);
    if (current != 0) {
        int hi;
        func_135EC8(current, &values[0], &values[1]);
        hi = values[1];
        func_059958(values[0], hi);
    } else {
        func_059958(0, 0);
    }
}
