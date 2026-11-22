/* LEVEL_04:0x03CE40 -- placement copy of LEVEL_01_03B3B0.c: returns the 64-bit value at the fixed record's offset. */
struct Pair {
    unsigned int low;
    int high;
};

struct Record {
    char pad[0x96c];
    struct Pair value;
} __attribute__((packed));

extern struct Record D_0024F950;
extern struct Pair func_03CDF8(const struct Record *record);

struct Pair func_03CE40(void)
{
    return func_03CDF8(&D_0024F950);
}
