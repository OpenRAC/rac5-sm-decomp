/* LEVEL_23:0x0351C0 -- placement copy of LEVEL_01_03B3B0.c: returns the 64-bit value at the fixed record's offset. */
struct Pair {
    unsigned int low;
    int high;
};

struct Record {
    char pad[0x96c];
    struct Pair value;
} __attribute__((packed));

extern struct Record D_002025C0;
extern struct Pair func_035178(const struct Record *record);

struct Pair func_0351C0(void)
{
    return func_035178(&D_002025C0);
}
