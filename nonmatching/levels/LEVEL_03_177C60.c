/* USA LEVEL_03:177C60, 160-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Byte-exact in an isolated link, but held for a local prototype conflict; no matching credit.
 * Remaining issue: loop as for (i = 0; i != count; i++) with the entry as entry + i * 0x34
 * (giv), allocation result in a local before the global store (lui after the call), entry
 * declared before count; no -fno-gcse needed; callees agree with accepted func_10D468 (void *)
 * and func_177C18 (two pointers)
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_03:0x177C60 -- allocates one 0xCC-byte record per entry of the source list, stores the block in the global and initialises each record from its 0x34-byte source entry. */
typedef struct Src {
    char pad00[0x3C];
    unsigned char count;
} Src;

typedef struct Holder {
    char pad00[4];
    char *entries;
} Holder;

extern char D_0023AE40[];
extern char *D_003B0D40;

extern void *func_10D468(int size, int zero, char *file, int line);
extern void func_177C18(char *obj, char *arg);

void func_177C60(Holder *h)
{
    char *entry = h->entries;
    unsigned int count = ((Src *)h)->count;
    unsigned int i;
    char *block;

    block = func_10D468(count * 0xCC, 0, D_0023AE40, 0x1B3);
    D_003B0D40 = block;
    for (i = 0; i != count; i++) {
        func_177C18(D_003B0D40 + i * 0xCC, entry + i * 0x34);
    }
}
