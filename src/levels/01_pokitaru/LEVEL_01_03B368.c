/* LEVEL_01:0x03B368 -- returns an unaligned 64-bit field of a record as one value. */
struct Pair {
    unsigned int low;
    int high;
};

struct Record {
    char pad[0x96c];
    struct Pair value;
} __attribute__((packed));

struct Pair func_03B368(const struct Record *record)
{
    struct Pair pair = record->value;
    return pair;
}
