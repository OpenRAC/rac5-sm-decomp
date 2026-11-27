/* LEVEL_20:0x0B42F0 -- placement copy of FRONTEND_0147C0.c: clears the global range state, or loads it from a source header (three counts followed by the data) and derives the start, middle and end pointers. */
typedef struct {
    int first;
    int second;
    int third;
    int *start;
    int *middle;
    int *end;
} State;

extern State D_0019EEC0;
extern void *memset(void *, int, unsigned int);

void func_0B42F0(const int *source)
{
    int *p;

    if (source == 0) {
        memset(&D_0019EEC0, 0, 0x18);
    } else {
        D_0019EEC0.first = source[0];
        D_0019EEC0.second = source[1];
        D_0019EEC0.third = source[2];
        p = (int *)(source + 3);
        D_0019EEC0.start = p;
        p += D_0019EEC0.first;
        D_0019EEC0.middle = p;
        p += D_0019EEC0.second;
        D_0019EEC0.end = p;
    }
}
