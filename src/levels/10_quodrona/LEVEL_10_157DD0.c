/* LEVEL_10:0x157DD0 -- placement copy of LEVEL_01_15F5E0.c: picks a random valid slot number from 2..14 that is not already in the given list, trying three progressively looser filters. */
extern int rand(void);
extern int func_023520(char *obj, int i);
extern int func_0249A8(int i);
extern char *func_023FD8(int i, int v);
extern char *func_023F90(int i, int v);
extern int func_024858(int i, int v);

unsigned char func_157DD0(int unused, char *obj, unsigned char *list, unsigned char count)
{
    unsigned int buf[16];
    int n;
    unsigned char i;
    unsigned char j;
    unsigned int k;
    unsigned int m;
    char *a;
    char *b;

    n = 0;
    i = 2;
    do {
        if (func_023520(obj, i) != 0 && func_0249A8(i) != 0) {
            a = func_023FD8(i, *(int *)(obj + 0xF8));
            b = func_023F90(i, *(int *)(obj + 0xF8));
            if (*(int *)(a + 0x38) != *(int *)(b + 0x40) && func_024858(i, *(int *)(obj + 0xF8)) == 0) {
                j = 0;
                if (count != 0) {
                    do {
                        if (list[j] == i) {
                            goto next1;
                        }
                        j++;
                    } while (j < count);
                }
                buf[n] = i;
                n++;
            }
        }
    next1:
        i++;
    } while (i < 15);
    if (n == 0) {
        k = 2;
        do {
            if (func_023520(obj, k) != 0 && func_0249A8(k) != 0 && func_024858(k, *(int *)(obj + 0xF8)) == 0) {
                j = 0;
                if (count != 0) {
                    do {
                        if (list[j] == k) {
                            goto next2;
                        }
                        j++;
                    } while (j < count);
                }
                buf[n] = k;
                n++;
            }
        next2:
            k++;
        } while (k < 15);
        if (n == 0) {
            m = 2;
            do {
                if (func_0249A8(m) != 0) {
                    j = 0;
                    if (count != 0) {
                        do {
                            if (list[j] == m) {
                                goto next3;
                            }
                            j++;
                        } while (j < count);
                    }
                    buf[n] = m;
                    n++;
                }
            next3:
                m++;
            } while (m < 15);
        }
    }
    if (n == 0) {
        return 0;
    }
    return buf[rand() % n];
}
