/* LEVEL_22:0x04F158 -- placement copy of LEVEL_01_059960.c: refreshes a cached record id when enabled, then forwards its two halves. */
extern char *func_04F038(long long);
extern void func_10D3A8(int, int *, int *);
extern void func_04F150(int, int);

void func_04F158(char *record, long long source, int enabled)
{
    int current;
    int values[2];
    if (enabled) {
        char *result = func_04F038(source);
        if (result != 0) {
            *(int *)(record + 0xce8) = *(int *)(result + 4);
        }
    } else {
        *(int *)(record + 0xce8) = 0;
    }
    current = *(int *)(record + 0xce8);
    if (current != 0) {
        int hi;
        func_10D3A8(current, &values[0], &values[1]);
        hi = values[1];
        func_04F150(values[0], hi);
    } else {
        func_04F150(0, 0);
    }
}
