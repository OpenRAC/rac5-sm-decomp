/* LEVEL_18:0x0C8D98 -- placement copy of FRONTEND_0147C0.c: clears the global range state, or loads it from a source header (three counts followed by the data) and derives the start, middle and end pointers. */
typedef struct {
    int first;
    int second;
    int third;
    int *start;
    int *middle;
    int *end;
} State;

extern State D_0027BA00;
extern void *memset(void *, int, unsigned int);

void func_0C8D98(const int *source)
{
    int *p;

    if (source == 0) {
        memset(&D_0027BA00, 0, 0x18);
    } else {
        D_0027BA00.first = source[0];
        D_0027BA00.second = source[1];
        D_0027BA00.third = source[2];
        p = (int *)(source + 3);
        D_0027BA00.start = p;
        p += D_0027BA00.first;
        D_0027BA00.middle = p;
        p += D_0027BA00.second;
        D_0027BA00.end = p;
    }
}
