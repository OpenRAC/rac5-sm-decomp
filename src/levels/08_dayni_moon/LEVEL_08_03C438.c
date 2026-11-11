/* LEVEL_08:0x03C438 -- placement copy of LEVEL_01_037368.c: short ranges go to one copy; long ranges split at first+0x20. */
extern void func_03C340(char *, char *);
extern void func_03C3E8(char *, char *, int);

void func_03C438(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        func_03C340(first, middle);
        func_03C3E8(middle, last, 0);
    } else {
        func_03C340(first, last);
    }
}
