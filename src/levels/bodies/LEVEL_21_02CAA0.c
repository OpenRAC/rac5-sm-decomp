/* LEVEL_21:0x02CAA0 -- placement copy of LEVEL_01_037368.c: short ranges go to one copy; long ranges split at first+0x20. */
extern void func_02C9A8(char *, char *);
extern void func_02CA50(char *, char *, int);

void func_02CAA0(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        func_02C9A8(first, middle);
        func_02CA50(middle, last, 0);
    } else {
        func_02C9A8(first, last);
    }
}
