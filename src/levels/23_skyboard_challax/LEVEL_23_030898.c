/* LEVEL_23:0x030898 -- placement copy of LEVEL_01_037368.c: short ranges go to one copy; long ranges split at first+0x20. */
extern void func_0307A0(char *, char *);
extern void func_030848(char *, char *, int);

void func_030898(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        func_0307A0(first, middle);
        func_030848(middle, last, 0);
    } else {
        func_0307A0(first, last);
    }
}
