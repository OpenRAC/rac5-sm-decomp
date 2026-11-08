/* LEVEL_01.REL:0x133FE8: reviewed 132-byte candidate.
 * pinned C with gnu-ee-trial links 132 bytes; first differs at +52.
 * Retry: Recover the callee-argument move in the call delay slot and the first two
 * byte-store order within the 132-byte body.
 * No matching credit.
 */
typedef unsigned int u32;
extern char D_0038E618[];
extern int func_1343A0(u32 index);
int func_133FE8(u32 index, unsigned char first, unsigned char second,
                unsigned char third)
{
    char *entry;
    if (index < 8) {
        if (func_1343A0(index)) {
            entry = D_0038E618 + index * 0x824;
            entry[0x821] = third;
            entry[0x822] = second;
            entry[0x820] = first;
            return 1;
        }
    }
    return 0;
}
