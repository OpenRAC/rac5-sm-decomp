/* LEVEL_06:0x033DB8 -- placement copy of LEVEL_01_037368.c: short ranges go to one copy; long ranges split at first+0x20. */
extern void func_033CC0(char *, char *);
extern void func_033D68(char *, char *, int);

void func_033DB8(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        func_033CC0(first, middle);
        func_033D68(middle, last, 0);
    } else {
        func_033CC0(first, last);
    }
}
