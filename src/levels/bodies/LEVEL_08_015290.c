/* LEVEL_08:0x015290 -- placement copy of LEVEL_01_014918.c: converts leading offsets to pointers while the target record has a nonzero field; returns the number converted. */
extern int D_0024FC54;

unsigned int func_015290(int *p, unsigned int n)
{
    unsigned int i;
    int v;
    int ok;
    char *t;

    i = 0;
    if (n != 0) {
        do {
            v = p[0];
            if (v == 0) {
                ok = 0;
            } else {
                t = (char *)(D_0024FC54 + v);
                if (*(int *)(t + 0x40) == 0) {
                    p[0] = 0;
                    ok = 0;
                } else {
                    p[0] = (int)t;
                    ok = 1;
                }
            }
            if (!ok) {
                break;
            }
            i++;
            p++;
        } while (i < n);
    }
    return i;
}
