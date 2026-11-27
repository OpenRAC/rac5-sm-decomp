/* LEVEL_23:0x0D14F8 -- placement copy of FRONTEND_0147C0.c: clears the global range state, or loads it from a source header (three counts followed by the data) and derives the start, middle and end pointers. */
typedef struct {
    int first;
    int second;
    int third;
    int *start;
    int *middle;
    int *end;
} State;

extern State D_002FEA40;
extern void *memset(void *, int, unsigned int);

void func_0D14F8(const int *source)
{
    int *p;

    if (source == 0) {
        memset(&D_002FEA40, 0, 0x18);
    } else {
        D_002FEA40.first = source[0];
        D_002FEA40.second = source[1];
        D_002FEA40.third = source[2];
        p = (int *)(source + 3);
        D_002FEA40.start = p;
        p += D_002FEA40.first;
        D_002FEA40.middle = p;
        p += D_002FEA40.second;
        D_002FEA40.end = p;
    }
}
