/* LEVEL_01.REL:0x028798, bounded 52-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +8.
 * The pinned compiler folds the table base and +0x24 field address into one address and changes the loop registers. A typed table still links 52 bytes. Reopen with an evidenced layout or a qualified compiler address-materialization route.
 */
typedef struct { char before[0x24]; int slots[4]; } Table;
extern Table D_00230F40;

void func_028798(int value)
{
    int *entry = D_00230F40.slots;
    unsigned int index = 0;
    do {
        ++index;
        if (value == *entry)
            *entry = 0;
        ++entry;
    } while (index < 4);
}