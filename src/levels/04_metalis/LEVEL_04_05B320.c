/* LEVEL_04:0x05B320 -- placement copy of LEVEL_01_059960.c: refreshes a cached record id when enabled, then forwards its two halves. */
extern char *func_05B200(long long);
extern void func_142308(int, int *, int *);
extern void func_05B318(int, int);

void func_05B320(char *record, long long source, int enabled)
{
    int current;
    int values[2];
    if (enabled) {
        char *result = func_05B200(source);
        if (result != 0) {
            *(int *)(record + 0xce8) = *(int *)(result + 4);
        }
    } else {
        *(int *)(record + 0xce8) = 0;
    }
    current = *(int *)(record + 0xce8);
    if (current != 0) {
        int hi;
        func_142308(current, &values[0], &values[1]);
        hi = values[1];
        func_05B318(values[0], hi);
    } else {
        func_05B318(0, 0);
    }
}
