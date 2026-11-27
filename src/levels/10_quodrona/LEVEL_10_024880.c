/* LEVEL_10:0x024880 -- placement copy of LEVEL_01_024F18.c: for an index below 25, either runs the apply helpers with the stored value or the release helper, and reports success; 0 for larger indices. */
extern int D_00223780;

extern int func_027040(void *value);
extern void func_024B68(long long value, int state);
extern int func_0270C8(int index);

int func_024880(int index, int apply)
{
    if ((unsigned int)index < 25) {
        if (apply != 0) {
            func_027040((void *)index);
            func_024B68(index, D_00223780);
        } else {
            func_0270C8(index);
        }
        return 1;
    }
    return 0;
}
