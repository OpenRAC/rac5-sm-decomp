/* LEVEL_01.REL:0x03B368: reviewed 72-byte candidate.
 * pinned C with gnu-ee-trial links 44 bytes; first differs at +20.
 * Retry: Find a source-level packed 64-bit reconstruction that explains the retail
 * stack copy and masks without artificial operations.
 * No matching credit.
 */
struct Pair {
    unsigned int low;
    int high;
} __attribute__((packed));

struct Record {
    char pad[0x96c];
    struct Pair value;
} __attribute__((packed));

unsigned long long func_03B368(const struct Record *record)
{
    struct Pair pair = record->value;
    return ((unsigned long long)(unsigned int)pair.high << 32) | pair.low;
}
