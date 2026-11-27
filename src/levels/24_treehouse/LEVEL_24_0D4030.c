/* LEVEL_24:0x0D4030 -- placement copy of FRONTEND_0147C0.c: clears the global range state, or loads it from a source header (three counts followed by the data) and derives the start, middle and end pointers. */
typedef struct {
    int first;
    int second;
    int third;
    int *start;
    int *middle;
    int *end;
} State;

extern State D_002F94C0;
extern void *memset(void *, int, unsigned int);

void func_0D4030(const int *source)
{
    int *p;

    if (source == 0) {
        memset(&D_002F94C0, 0, 0x18);
    } else {
        D_002F94C0.first = source[0];
        D_002F94C0.second = source[1];
        D_002F94C0.third = source[2];
        p = (int *)(source + 3);
        D_002F94C0.start = p;
        p += D_002F94C0.first;
        D_002F94C0.middle = p;
        p += D_002F94C0.second;
        D_002F94C0.end = p;
    }
}
