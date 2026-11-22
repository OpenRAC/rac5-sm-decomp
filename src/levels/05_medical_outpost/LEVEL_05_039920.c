/* LEVEL_05:0x039920 -- placement copy of LEVEL_01_03B3B0.c: returns the 64-bit value at the fixed record's offset. */
struct Pair {
    unsigned int low;
    int high;
};

struct Record {
    char pad[0x96c];
    struct Pair value;
} __attribute__((packed));

extern struct Record D_00220E40;
extern struct Pair func_0398D8(const struct Record *record);

struct Pair func_039920(void)
{
    return func_0398D8(&D_00220E40);
}
