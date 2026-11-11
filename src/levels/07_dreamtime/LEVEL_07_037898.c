/* LEVEL_07:0x037898 -- placement copy of LEVEL_01_037368.c: short ranges go to one copy; long ranges split at first+0x20. */
extern void func_0377A0(char *, char *);
extern void func_037848(char *, char *, int);

void func_037898(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        func_0377A0(first, middle);
        func_037848(middle, last, 0);
    } else {
        func_0377A0(first, last);
    }
}
