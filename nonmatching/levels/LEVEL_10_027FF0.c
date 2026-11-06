/* LEVEL_10.REL:0x027FF0, bounded 52-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +8.
 * The pinned compiler folds the global table base and +0x24 field address into one address and chooses different loop registers. The typed record still links 52 bytes; five other qualified compiler routes also miss. Reopen with the original table layout or a qualified address-materialization route.
 */
typedef struct { char before[0x24]; int slots[4]; } Table;
extern Table D_0023A340;

void func_027FF0(int value)
{
    int *entry = D_0023A340.slots;
    unsigned int index = 0;
    do {
        ++index;
        if (value == *entry)
            *entry = 0;
        ++entry;
    } while (index < 4);
}