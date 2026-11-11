/* LEVEL_17:0x032E28 -- placement copy of LEVEL_01_037368.c: short ranges go to one copy; long ranges split at first+0x20. */
extern void func_032D30(char *, char *);
extern void func_032DD8(char *, char *, int);

void func_032E28(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        func_032D30(first, middle);
        func_032DD8(middle, last, 0);
    } else {
        func_032D30(first, last);
    }
}
