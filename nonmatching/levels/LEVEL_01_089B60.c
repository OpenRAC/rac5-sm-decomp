/* LEVEL_01.REL:0x089B60: reviewed 132-byte candidate.
 * pinned C with gnu-ee-trial links 136 bytes; first differs at +20.
 * Retry: Prove the resource byte at item offset 0x2E stays in 0..31 for every caller,
 * or qualify a C compiler route that removes the explicit low-five-bit mask without
 * changing defined behavior.
 * No matching credit.
 */
typedef struct {
    char *items;
    char pad_04[4];
    unsigned char count;
} Input;

typedef struct { char pad_00[0x8]; char *p_08; } Doc;
typedef struct { char pad_00[0x2F]; unsigned char b_2F; } Ctx;
typedef struct {
    char pad_00[0x4];
    int f_04;
    int f_08;
    float f_0C;
    Doc *f_10;
    int f_14;
    int f_18;
    float f_1C;
    int f_20;
    unsigned char b_24;
} Rec;

extern int func_089BE8(Ctx *, Rec *);

int func_089B60(Input *input, int flags, int value, Rec *result)
{
    unsigned char selected[16];
    unsigned char count;

    *(int *)result = value;
    selected[0] = 0;
    count = input->count;
    if (count != 0) {
        unsigned int n = count;
        unsigned char *item = (unsigned char *)input->items + 0x2F;
        do {
            unsigned int mask = 1U << (item[-1] & 31U);
            if ((mask & flags) != 0) {
                unsigned char *choice = (*item < selected[0]) ? selected : item;
                selected[0] = *choice;
            }
            --n;
            item += 0x40;
        } while (n != 0);
    }
    result->f_10 = 0;
    result->b_24 = 0;
    func_089BE8(0, result);
    return 1;
}
