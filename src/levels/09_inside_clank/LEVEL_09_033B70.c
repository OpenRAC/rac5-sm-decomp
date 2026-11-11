/* LEVEL_09:0x033B70 -- placement copy of LEVEL_01_037368.c: short ranges go to one copy; long ranges split at first+0x20. */
extern void func_033A78(char *, char *);
extern void func_033B20(char *, char *, int);

void func_033B70(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        func_033A78(first, middle);
        func_033B20(middle, last, 0);
    } else {
        func_033A78(first, last);
    }
}
