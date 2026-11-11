/* LEVEL_03:0x158AC0 -- placement copy of LEVEL_01_15F5E0.c: picks a random valid slot number from 2..14 that is not already in the given list, trying three progressively looser filters. */
extern int rand(void);
extern int func_023A88(char *obj, int i);
extern int func_024F10(int i);
extern char *func_024540(int i, int v);
extern char *func_0244F8(int i, int v);
extern int func_024DC0(int i, int v);

unsigned char func_158AC0(int unused, char *obj, unsigned char *list, unsigned char count)
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
        if (func_023A88(obj, i) != 0 && func_024F10(i) != 0) {
            a = func_024540(i, *(int *)(obj + 0xF8));
            b = func_0244F8(i, *(int *)(obj + 0xF8));
            if (*(int *)(a + 0x38) != *(int *)(b + 0x40) && func_024DC0(i, *(int *)(obj + 0xF8)) == 0) {
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
            if (func_023A88(obj, k) != 0 && func_024F10(k) != 0 && func_024DC0(k, *(int *)(obj + 0xF8)) == 0) {
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
                if (func_024F10(m) != 0) {
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
