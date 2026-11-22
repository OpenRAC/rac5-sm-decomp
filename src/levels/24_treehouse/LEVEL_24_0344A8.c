/* LEVEL_24:0x0344A8 -- placement copy of LEVEL_01_03B3B0.c: returns the 64-bit value at the fixed record's offset. */
struct Pair {
    unsigned int low;
    int high;
};

struct Record {
    char pad[0x96c];
    struct Pair value;
} __attribute__((packed));

extern struct Record D_00201040;
extern struct Pair func_034460(const struct Record *record);

struct Pair func_0344A8(void)
{
    return func_034460(&D_00201040);
}
