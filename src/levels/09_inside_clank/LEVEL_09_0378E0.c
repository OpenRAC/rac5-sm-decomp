/* LEVEL_09:0x0378E0 -- placement copy of LEVEL_01_03B3B0.c: returns the 64-bit value at the fixed record's offset. */
struct Pair {
    unsigned int low;
    int high;
};

struct Record {
    char pad[0x96c];
    struct Pair value;
} __attribute__((packed));

extern struct Record D_0021C8C0;
extern struct Pair func_037898(const struct Record *record);

struct Pair func_0378E0(void)
{
    return func_037898(&D_0021C8C0);
}
