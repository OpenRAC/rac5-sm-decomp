/* LEVEL_04:0x0389B0 -- placement copy of LEVEL_01_037368.c: short ranges go to one copy; long ranges split at first+0x20. */
extern void func_0388B8(char *, char *);
extern void func_038960(char *, char *, int);

void func_0389B0(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        func_0388B8(first, middle);
        func_038960(middle, last, 0);
    } else {
        func_0388B8(first, last);
    }
}
