/* LEVEL_16.REL:0x168C98: reviewed 68-byte candidate.
 * Counts the leading non-empty entries of the six-slot list.
 * pinned C with gnu-ee-trial links 68/68 bytes; first differs at +4.
 * The retail clears the counter before the first load and fills the first
 * branch delay slot with the list base; the compiler places the counter reset
 * in that slot under all four profiles.
 * Retry: Recover the loop header form.
 * No matching credit.
 */
typedef struct {
    char pad[0x8];
    void *items[6];
} List;

typedef struct {
    char pad[0x54];
    List *list;
} Obj;

int func_168C98(Obj *obj)
{
    List *list = obj->list;
    unsigned char i;

    for (i = 0; i != 6 && list->items[i] != 0; i++)
        ;
    return i;
}
