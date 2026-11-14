/* USA LEVEL_01.REL:0x0DA6C8, 120-byte candidate (14 November 2026).
 * Measured pinned: 9 differing words; first difference at 0x2C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int first;
    int second;
    int third;
    int *start;
    int *middle;
    int *end;
} State;

extern State D_0032D600;
extern void *memset(void *, int, unsigned int);

void func_0DA6C8(const int *source)
{
    if (source == 0) {
        memset(&D_0032D600, 0, 0x18);
    } else {
        D_0032D600.first = source[0];
        D_0032D600.second = source[1];
        D_0032D600.start = (int *)(source + 3);
        D_0032D600.middle = D_0032D600.start + D_0032D600.first;
        D_0032D600.third = source[2];
        D_0032D600.end = D_0032D600.middle + D_0032D600.second;
    }
}
