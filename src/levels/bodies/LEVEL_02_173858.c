/* LEVEL_02:0x173858 -- placement copy of LEVEL_01_15F5E0.c: picks a random valid slot number from 2..14 that is not already in the given list, trying three progressively looser filters. */
extern int rand(void);
extern int func_024680(char *obj, int i);
extern int func_0259A0(int i);
extern char *func_024FD0(int i, int v);
extern char *func_024F88(int i, int v);
extern int func_025850(int i, int v);

unsigned char func_173858(int unused, char *obj, unsigned char *list, unsigned char count)
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
        if (func_024680(obj, i) != 0 && func_0259A0(i) != 0) {
            a = func_024FD0(i, *(int *)(obj + 0xF8));
            b = func_024F88(i, *(int *)(obj + 0xF8));
            if (*(int *)(a + 0x38) != *(int *)(b + 0x40) && func_025850(i, *(int *)(obj + 0xF8)) == 0) {
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
            if (func_024680(obj, k) != 0 && func_0259A0(k) != 0 && func_025850(k, *(int *)(obj + 0xF8)) == 0) {
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
                if (func_0259A0(m) != 0) {
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
