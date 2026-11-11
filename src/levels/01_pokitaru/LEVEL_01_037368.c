/* LEVEL_01:0x037368 -- short ranges go to one copy; long ranges split at first+0x20. */
extern void func_037270(char *, char *);
extern void func_037318(char *, char *, int);

void func_037368(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        func_037270(first, middle);
        func_037318(middle, last, 0);
    } else {
        func_037270(first, last);
    }
}
