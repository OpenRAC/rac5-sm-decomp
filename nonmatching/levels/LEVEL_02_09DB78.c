/* LEVEL_02.REL:0x09DB78: reviewed 88-byte candidate.
 * pinned C with gnu-ee-trial links 104 bytes; first differs at +4.
 * Retry: Recover global-base and multiply register lifetimes; establish a nonzero
 * divisor precondition or defined retail divide-zero behavior before any C promotion.
 * No matching credit.
 */
extern int D_00225860[];
extern char D_002AF7CC[];

void func_09DB78(char *record, int type, int index)
{
    int numerator;
    unsigned int denominator;
    char *row;

    *(short *)(record + 0x10) = type;
    row = type * 0x28 + D_002AF7CC;
    denominator = *(unsigned short *)(row + 8);
    numerator = D_00225860[index];
    *(int *)(record + 0) = (int)record;
    *(int *)(record + 4) = (int)record;
    *(int *)(record + 8) = (int)record;
    *(int *)(record + 0xC) = (int)record;
    record[0x12] = index;
    if (denominator != 0)
        record[0x13] = numerator / (int)denominator - 1;
    else
        record[0x13] = 0; /* Zero-divisor behavior remains unclassified. */
}
