/* LEVEL_10:0x035D18 -- placement copy of LEVEL_01_037368.c: short ranges go to one copy; long ranges split at first+0x20. */
extern void func_035C20(char *, char *);
extern void func_035CC8(char *, char *, int);

void func_035D18(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        func_035C20(first, middle);
        func_035CC8(middle, last, 0);
    } else {
        func_035C20(first, last);
    }
}
