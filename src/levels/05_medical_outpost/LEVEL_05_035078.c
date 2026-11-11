/* LEVEL_05:0x035078 -- placement copy of LEVEL_01_037368.c: short ranges go to one copy; long ranges split at first+0x20. */
extern void func_034F80(char *, char *);
extern void func_035028(char *, char *, int);

void func_035078(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        func_034F80(first, middle);
        func_035028(middle, last, 0);
    } else {
        func_034F80(first, last);
    }
}
