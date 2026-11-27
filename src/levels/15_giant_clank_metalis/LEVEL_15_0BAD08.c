/* LEVEL_15:0x0BAD08 -- placement copy of FRONTEND_0147C0.c: clears the global range state, or loads it from a source header (three counts followed by the data) and derives the start, middle and end pointers. */
typedef struct {
    int first;
    int second;
    int third;
    int *start;
    int *middle;
    int *end;
} State;

extern State D_00244E40;
extern void *memset(void *, int, unsigned int);

void func_0BAD08(const int *source)
{
    int *p;

    if (source == 0) {
        memset(&D_00244E40, 0, 0x18);
    } else {
        D_00244E40.first = source[0];
        D_00244E40.second = source[1];
        D_00244E40.third = source[2];
        p = (int *)(source + 3);
        D_00244E40.start = p;
        p += D_00244E40.first;
        D_00244E40.middle = p;
        p += D_00244E40.second;
        D_00244E40.end = p;
    }
}
