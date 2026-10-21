/* LEVEL_18:0x000340 -- one twenty-byte table entry is copied onto the
   stack and two of its words are handed to the next function.
   The table starts at 0x1C1A00 and its entries are twenty bytes long. */
typedef struct {
    int i[5];
} Entry;

extern Entry D_001C1A00[];

void func_000318(int third, int second);

void func_000340(int index)
{
    Entry local = D_001C1A00[index];

    func_000318(local.i[3], local.i[1]);
}
