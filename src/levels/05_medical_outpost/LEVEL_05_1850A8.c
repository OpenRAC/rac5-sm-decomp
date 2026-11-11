/* LEVEL_05:0x1850A8 -- finds or claims a slot in a four-entry pointer table and reports its index. */

extern void *D_001F7720[];

void func_1850A8(void *a0, int *a1)
{
    unsigned int n;
    void **slot;
    void *v;

    n = 0;
    slot = D_001F7720;
    for (;;) {
        v = *slot;
        if (v == 0) {
            *slot = a0;
            *a1 = n;
            return;
        }
        if ((*(int *)((char *)v + 0x64) & 1) == 0) {
            *slot = a0;
            *a1 = n;
            return;
        }
        if (a0 == v) {
            *a1 = n;
            return;
        }
        n++;
        slot++;
        if (!(n < 4)) {
            break;
        }
    }
    *a1 = -1;
}
