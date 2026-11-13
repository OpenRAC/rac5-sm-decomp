/* USA LEVEL_03.REL:0x177C60, 160-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 160 linked bytes; first differing word +0x34.
 * Unaccepted; no matching credit. Recover constructor argument/index types or an independently justified allocation order; three register-allocation trials retain the same six-word mismatch.
 */
typedef struct Arg { char bytes[52]; } Arg;
extern char D_23AE40[];
extern char *D_3B0D40;
extern void *func_10D468(int size, int zero, char *file, int line);
extern void func_177C18(char *object, Arg *arg);
void func_177C60(char *resource)
{
    unsigned int count = *(unsigned char *)(resource + 0x3C);
    Arg *arg = *(Arg **)(resource + 4);
    unsigned int i = 0;
    char *allocated = func_10D468(count * 204, 0, D_23AE40, 435);
    D_3B0D40 = allocated;
    if (count) {
        unsigned int offset = 0;
        do {
            func_177C18(D_3B0D40 + offset, arg);
            ++arg;
            ++i;
            offset += 204;
        } while (i != count);
    }
}
