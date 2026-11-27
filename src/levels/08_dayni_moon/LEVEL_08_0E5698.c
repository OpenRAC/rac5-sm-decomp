/* LEVEL_08:0x0E5698 -- placement copy of FRONTEND_0147C0.c: clears the global range state, or loads it from a source header (three counts followed by the data) and derives the start, middle and end pointers. */
typedef struct {
    int first;
    int second;
    int third;
    int *start;
    int *middle;
    int *end;
} State;

extern State D_0037C880;
extern void *memset(void *, int, unsigned int);

void func_0E5698(const int *source)
{
    int *p;

    if (source == 0) {
        memset(&D_0037C880, 0, 0x18);
    } else {
        D_0037C880.first = source[0];
        D_0037C880.second = source[1];
        D_0037C880.third = source[2];
        p = (int *)(source + 3);
        D_0037C880.start = p;
        p += D_0037C880.first;
        D_0037C880.middle = p;
        p += D_0037C880.second;
        D_0037C880.end = p;
    }
}
