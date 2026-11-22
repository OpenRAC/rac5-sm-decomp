/* LEVEL_07:0x03B8E0 -- placement copy of LEVEL_01_03B3B0.c: returns the 64-bit value at the fixed record's offset. */
struct Pair {
    unsigned int low;
    int high;
};

struct Record {
    char pad[0x96c];
    struct Pair value;
} __attribute__((packed));

extern struct Record D_0024AA40;
extern struct Pair func_03B898(const struct Record *record);

struct Pair func_03B8E0(void)
{
    return func_03B898(&D_0024AA40);
}
