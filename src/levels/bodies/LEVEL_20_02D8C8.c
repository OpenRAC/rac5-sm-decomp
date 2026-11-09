/* LEVEL_20:0x02D8C8 -- placement copy of LEVEL_01_037368.c: short ranges go to one copy; long ranges split at first+0x20. */
extern void func_02D7D0(char *, char *);
extern void func_02D878(char *, char *, int);

void func_02D8C8(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        func_02D7D0(first, middle);
        func_02D878(middle, last, 0);
    } else {
        func_02D7D0(first, last);
    }
}
