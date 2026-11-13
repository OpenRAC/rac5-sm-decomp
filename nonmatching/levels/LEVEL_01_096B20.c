/* USA LEVEL_01.REL:0x096B20, 188-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 188 linked bytes; no differing word in the isolated link.
 * Unaccepted; no matching credit. Reconcile the proven return/argument domains, all callers and complete function bounds before promotion.
 */
/* Find a four-word key among cached records, creating it when absent. */
typedef struct Record { unsigned int key[4]; unsigned char rest[24]; } Record;
typedef struct Cache { Record records[256]; int count; } Cache;
extern Cache D_002982CC;
extern int func_096988(const void *, int);
int func_096B20(const void *key_data)
{
    const unsigned int *key=key_data;
    Record *record=D_002982CC.records;
    Record *end=record+D_002982CC.count;
    int index;
    for (; record!=end; ++record)
        if (key[0]==record->key[0] && key[1]==record->key[1] && key[2]==record->key[2] && key[3]==record->key[3]) break;
    index=record-D_002982CC.records;
    if (index==D_002982CC.count) return func_096988(key_data,0);
    return index;
}
