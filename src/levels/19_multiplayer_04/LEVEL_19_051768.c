/* LEVEL_19:0x051768 -- placement copy of LEVEL_01_059960.c: refreshes a cached record id when enabled, then forwards its two halves. */
extern char *func_051648(long long);
extern void func_126270(int, int *, int *);
extern void func_051760(int, int);

void func_051768(char *record, long long source, int enabled)
{
    int current;
    int values[2];
    if (enabled) {
        char *result = func_051648(source);
        if (result != 0) {
            *(int *)(record + 0xce8) = *(int *)(result + 4);
        }
    } else {
        *(int *)(record + 0xce8) = 0;
    }
    current = *(int *)(record + 0xce8);
    if (current != 0) {
        int hi;
        func_126270(current, &values[0], &values[1]);
        hi = values[1];
        func_051760(values[0], hi);
    } else {
        func_051760(0, 0);
    }
}
