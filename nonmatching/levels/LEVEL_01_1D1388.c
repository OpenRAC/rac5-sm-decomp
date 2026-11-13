/* USA LEVEL_01.REL:0x1D1388, 188-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 188 linked bytes; first differing word +0x0.
 * Unaccepted; no matching credit. Recover the record enum and aggregate declarations; signed/unsigned byte and loop register lifetimes remain different.
 */
extern char D_398920[], D_209030[], D_22A8A0[];
extern void func_1D1080(char *record, long long value);
extern void func_06DF88(char *record), func_06E400(char *record);
extern void func_1D10D0(char *record, char *entry, int value, char *table, int count);
void func_1D1388(void)
{
    char *state = D_398920;
    if ((unsigned char)state[0x138]) {
        char *p = state;
        char *entry = D_209030;
        char *end = state + 0x138;
        do {
            func_1D1080(p, *(int *)(state + 0x13C));
            func_06DF88(p);
            if (*(signed char *)(p + 0x30) == 3) {
                func_06E400(p);
                func_1D10D0(p, entry, *(int *)(state + 0x13C), D_22A8A0, 12);
            }
            p += 0x68;
            entry += 0x44;
        } while (p < end);
    }
}
