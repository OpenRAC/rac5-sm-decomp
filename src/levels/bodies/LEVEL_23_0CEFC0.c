/* LEVEL_23.REL:0x0CEFC0 -- the game hands the next record of a list to the
   caller: it takes the record at the current index of the list, copies it
   into the caller's record and tells the list that the record was taken.

   The record copy is one unaligned quadword move (ldl/ldr on the read side,
   sdl/sdr on the write side) plus a word at +8: that is the shape of a
   12-byte aggregate made of two floats and an int. */
typedef struct {
    float f[2];
    int   w;
} Record;

typedef struct {
    Record items[8];
    int    count;
    int    index;
} List;

extern void func_0CEF48(List *list);

int func_0CEFC0(List *list, Record *out)
{
    if (list->count == list->index)
        return 0;
    if (out == 0)
        return 0;
    *out = list->items[list->index];
    func_0CEF48(list);
    return 1;
}
