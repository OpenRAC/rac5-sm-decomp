/* USA LEVEL_08.REL:0x1AE3A8, 180-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 148 linked bytes; first differing word +0x0.
 * Unaccepted; no matching credit. Split the interval into the 152-byte search/notification function and the 28-byte wrapper at 0x1AE440, then retry each complete function.
 */
/* Boundary hold: the candidate interval includes two separate functions.
 * Recover and register their individual extents before crediting either. */
typedef struct Entry { unsigned char pad[0x24]; unsigned int id; unsigned char pad2[0x1c]; } Entry;
typedef struct Table { unsigned char pad[0x34]; Entry *entries; unsigned int count; } Table;
extern Table *D_0024FC50;
extern void func_0844E0(Entry *, int, int, int);
extern void func_20F610(void);
extern void func_20F708(void);
static inline Entry *find(unsigned int id)
{
    unsigned int i;
    Entry *entry=D_0024FC50->entries;
    for (i=0;i<D_0024FC50->count;++i,++entry) if (entry->id==id) return entry;
    return 0;
}
void func_1AE3A8(void)
{
    Entry *entry=find(0x8AA8E3A3u);
    if (entry) func_0844E0(entry,0,0,255);
    func_20F610();
}
void func_1AE440(void) { func_20F708(); }
