/* LEVEL_04:0x024B98 -- placement copy of LEVEL_01_024F18.c: for an index below 25, either runs the apply helpers with the stored value or the release helper, and reports success; 0 for larger indices. */
extern int D_00234170;

extern int func_0273F0(void *value);
extern void func_024E80(long long value, int state);
extern void func_027478(int index);

int func_024B98(int index, int apply)
{
    if ((unsigned int)index < 25) {
        if (apply != 0) {
            func_0273F0((void *)index);
            func_024E80(index, D_00234170);
        } else {
            func_027478(index);
        }
        return 1;
    }
    return 0;
}
