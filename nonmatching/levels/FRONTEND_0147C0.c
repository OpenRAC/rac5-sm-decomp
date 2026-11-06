/* FRONTEND.REL:0x0147C0: Ghidra body 120 bytes.
 * Pinned pure C links 120 bytes and first differs at +46.
 * Recheck frontend global record pointer schedule. No matching credit.
 */
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
    if (source == 0) {
        memset(&D_0012D718, 0, 0x18);
    } else {
        D_0012D718.first = source[0];
        D_0012D718.start = (int *)(source + 3);
        D_0012D718.second = source[1];
        D_0012D718.third = source[2];
        D_0012D718.middle = D_0012D718.start + D_0012D718.first;
        D_0012D718.end = D_0012D718.middle + D_0012D718.second;
    }
}
