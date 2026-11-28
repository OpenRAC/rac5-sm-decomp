/* LEVEL_01:0x024F18 -- for an index below 25, either runs the apply helpers with the stored value or the release helper, and reports success; 0 for larger indices. */
extern int D_0021A7F0;

extern int func_027760(void *value);
extern void func_025200(long long value, int state);
extern int func_0277E8(int index);

int func_024F18(int index, int apply)
{
    if ((unsigned int)index < 25) {
        if (apply != 0) {
            func_027760((void *)index);
            func_025200(index, D_0021A7F0);
        } else {
            func_0277E8(index);
        }
        return 1;
    }
    return 0;
}
