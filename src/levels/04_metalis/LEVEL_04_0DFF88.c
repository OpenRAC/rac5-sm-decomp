/* LEVEL_04:0x0DFF88 -- placement copy of FRONTEND_0147C0.c: clears the global range state, or loads it from a source header (three counts followed by the data) and derives the start, middle and end pointers. */
typedef struct {
    int first;
    int second;
    int third;
    int *start;
    int *middle;
    int *end;
} State;

extern State D_00347E00;
extern void *memset(void *, int, unsigned int);

void func_0DFF88(const int *source)
{
    int *p;

    if (source == 0) {
        memset(&D_00347E00, 0, 0x18);
    } else {
        D_00347E00.first = source[0];
        D_00347E00.second = source[1];
        D_00347E00.third = source[2];
        p = (int *)(source + 3);
        D_00347E00.start = p;
        p += D_00347E00.first;
        D_00347E00.middle = p;
        p += D_00347E00.second;
        D_00347E00.end = p;
    }
}
