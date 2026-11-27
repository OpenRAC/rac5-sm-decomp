/* LEVEL_10:0x0DBB08 -- placement copy of FRONTEND_0147C0.c: clears the global range state, or loads it from a source header (three counts followed by the data) and derives the start, middle and end pointers. */
typedef struct {
    int first;
    int second;
    int third;
    int *start;
    int *middle;
    int *end;
} State;

extern State D_00336A00;
extern void *memset(void *, int, unsigned int);

void func_0DBB08(const int *source)
{
    int *p;

    if (source == 0) {
        memset(&D_00336A00, 0, 0x18);
    } else {
        D_00336A00.first = source[0];
        D_00336A00.second = source[1];
        D_00336A00.third = source[2];
        p = (int *)(source + 3);
        D_00336A00.start = p;
        p += D_00336A00.first;
        D_00336A00.middle = p;
        p += D_00336A00.second;
        D_00336A00.end = p;
    }
}
