/* LEVEL_17:0x0C9300 -- placement copy of FRONTEND_0147C0.c: clears the global range state, or loads it from a source header (three counts followed by the data) and derives the start, middle and end pointers. */
typedef struct {
    int first;
    int second;
    int third;
    int *start;
    int *middle;
    int *end;
} State;

extern State D_0026C980;
extern void *memset(void *, int, unsigned int);

void func_0C9300(const int *source)
{
    int *p;

    if (source == 0) {
        memset(&D_0026C980, 0, 0x18);
    } else {
        D_0026C980.first = source[0];
        D_0026C980.second = source[1];
        D_0026C980.third = source[2];
        p = (int *)(source + 3);
        D_0026C980.start = p;
        p += D_0026C980.first;
        D_0026C980.middle = p;
        p += D_0026C980.second;
        D_0026C980.end = p;
    }
}
