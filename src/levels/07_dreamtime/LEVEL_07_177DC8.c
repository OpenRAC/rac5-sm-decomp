/* LEVEL_07:0x177DC8 -- placement copy of LEVEL_05_162B58.c: returns 0 when the first object's float is positive or the second object's flag list contains a one; otherwise returns 1 when the second object has no first pointer, else the result of a helper on it. */
extern int func_01AA20(void);
extern int func_086800(char *a0, int a1);

int func_177DC8(char *a0, char *a1, char *a2)
{
    char *s0;
    int t;
    unsigned int i;

    if (0.0f < *(float *)(a0 + 0x70)) {
        return 0;
    }
    if (*(unsigned char *)(a1 + 0x1D) != 0) {
        a2 = a2 + 0x24;
        for (i = 0; i < 8; i++) {
            if (*(int *)a2 == 1) {
                return 0;
            }
            a2 = a2 + 0x28;
        }
    }
    t = *(int *)(a1 + 0x14);
    s0 = *(char **)a1;
    if (t != 0) {
        t = t + 0x30;
    } else {
        t = func_01AA20();
    }
    if (s0 != 0) {
        if (func_086800(s0, t) == 0) {
            return 0;
        }
    }
    return 1;
}
