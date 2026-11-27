/* LEVEL_07:0x0DC728 -- placement copy of FRONTEND_0147C0.c: clears the global range state, or loads it from a source header (three counts followed by the data) and derives the start, middle and end pointers. */
typedef struct {
    int first;
    int second;
    int third;
    int *start;
    int *middle;
    int *end;
} State;

extern State D_00342F00;
extern void *memset(void *, int, unsigned int);

void func_0DC728(const int *source)
{
    int *p;

    if (source == 0) {
        memset(&D_00342F00, 0, 0x18);
    } else {
        D_00342F00.first = source[0];
        D_00342F00.second = source[1];
        D_00342F00.third = source[2];
        p = (int *)(source + 3);
        D_00342F00.start = p;
        p += D_00342F00.first;
        D_00342F00.middle = p;
        p += D_00342F00.second;
        D_00342F00.end = p;
    }
}
