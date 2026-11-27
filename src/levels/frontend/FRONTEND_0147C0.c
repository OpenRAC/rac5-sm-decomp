/* FRONTEND:0x0147C0 -- clears the global range state, or loads it from a source header (three counts followed by the data) and derives the start, middle and end pointers. */
typedef struct {
    int first;
    int second;
    int third;
    int *start;
    int *middle;
    int *end;
} State;

extern State D_0012D718;
extern void *memset(void *, int, unsigned int);

void func_0147C0(const int *source)
{
    int *p;

    if (source == 0) {
        memset(&D_0012D718, 0, 0x18);
    } else {
        D_0012D718.first = source[0];
        D_0012D718.second = source[1];
        D_0012D718.third = source[2];
        p = (int *)(source + 3);
        D_0012D718.start = p;
        p += D_0012D718.first;
        D_0012D718.middle = p;
        p += D_0012D718.second;
        D_0012D718.end = p;
    }
}
