/* LEVEL_03:0x039F10 -- placement copy of LEVEL_01_03B3B0.c: returns the 64-bit value at the fixed record's offset. */
struct Pair {
    unsigned int low;
    int high;
};

struct Record {
    char pad[0x96c];
    struct Pair value;
} __attribute__((packed));

extern struct Record D_0024FFC0;
extern struct Pair func_039EC8(const struct Record *record);

struct Pair func_039F10(void)
{
    return func_039EC8(&D_0024FFC0);
}
