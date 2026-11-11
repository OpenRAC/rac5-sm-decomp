/* LEVEL_24:0x030460 -- placement copy of LEVEL_01_037368.c: short ranges go to one copy; long ranges split at first+0x20. */
extern void func_030368(char *, char *);
extern void func_030410(char *, char *, int);

void func_030460(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        func_030368(first, middle);
        func_030410(middle, last, 0);
    } else {
        func_030368(first, last);
    }
}
