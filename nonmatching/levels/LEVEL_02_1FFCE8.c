/* LEVEL_02.REL:0x1FFCE8: reviewed 84-byte candidate.
 * pinned C with gnu-ee-trial links 84 bytes; first differs at +41.
 * Retry: Recover the 64-bit exponent/fraction selection allocation and conditional
 * move. The retained C links 84/84, first differs at byte 41; three controlled forms
 * and qualified profiles do not reproduce the final register schedule.
 * No matching credit.
 */
typedef struct {
    int a;
    int b;
    int c;
    int unused;
    unsigned long long bits;
} Parts;
extern void func_1FF240(unsigned long long *input, Parts *out);
extern void func_1FFFA8(int a, int b, int c, int exponent);

void func_1FFCE8(unsigned long long value)
{
    Parts parts;
    unsigned long long bits;
    int exponent;
    int selected;
    func_1FF240(&value, &parts);
    bits = parts.bits;
    exponent = (int)((long long)(bits << 2) >> 32);
    selected = exponent | 1;
    if ((bits & 0x3fffffffULL) == 0)
        selected = exponent;
    func_1FFFA8(parts.a, parts.b, parts.c, selected);
}
