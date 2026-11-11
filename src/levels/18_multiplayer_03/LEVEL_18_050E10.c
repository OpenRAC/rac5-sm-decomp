/* LEVEL_18:0x050E10 -- placement copy of LEVEL_01_059960.c: refreshes a cached record id when enabled, then forwards its two halves. */
extern char *func_050CF0(long long);
extern void func_1249E8(int, int *, int *);
extern void func_050E08(int, int);

void func_050E10(char *record, long long source, int enabled)
{
    int current;
    int values[2];
    if (enabled) {
        char *result = func_050CF0(source);
        if (result != 0) {
            *(int *)(record + 0xce8) = *(int *)(result + 4);
        }
    } else {
        *(int *)(record + 0xce8) = 0;
    }
    current = *(int *)(record + 0xce8);
    if (current != 0) {
        int hi;
        func_1249E8(current, &values[0], &values[1]);
        hi = values[1];
        func_050E08(values[0], hi);
    } else {
        func_050E08(0, 0);
    }
}
