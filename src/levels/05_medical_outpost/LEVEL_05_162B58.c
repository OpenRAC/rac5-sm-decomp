/* LEVEL_05:0x162B58 -- returns 0 when the first object's float is positive or the second object's flag list contains a one; otherwise returns 1 when the second object has no first pointer, else the result of a helper on it. */
extern char *func_0198F0(void);
extern int func_082088(char *a0, char *a1);

int func_162B58(char *a0, char *a1, char *a2)
{
    char *s0;
    char *t;
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
    t = *(char **)(a1 + 0x14);
    s0 = *(char **)a1;
    if (t != 0) {
        t = t + 0x30;
    } else {
        t = func_0198F0();
    }
    if (s0 != 0) {
        if (func_082088(s0, t) == 0) {
            return 0;
        }
    }
    return 1;
}
