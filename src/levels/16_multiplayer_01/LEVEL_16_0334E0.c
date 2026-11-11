/* LEVEL_16:0x0334E0 -- placement copy of LEVEL_01_037368.c: short ranges go to one copy; long ranges split at first+0x20. */
extern void func_0333E8(char *, char *);
extern void func_033490(char *, char *, int);

void func_0334E0(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        func_0333E8(first, middle);
        func_033490(middle, last, 0);
    } else {
        func_0333E8(first, last);
    }
}
