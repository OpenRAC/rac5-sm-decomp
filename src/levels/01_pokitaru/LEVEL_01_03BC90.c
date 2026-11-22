/* LEVEL_01:0x03BC90 -- placement copy of LEVEL_01_03B3B0.c: returns the 64-bit value at the fixed record's offset. */
struct Pair {
    unsigned int low;
    int high;
};

struct Record {
    char pad[0x96c];
    struct Pair value;
} __attribute__((packed));

extern struct Record D_00235140;
extern struct Pair func_03BC48(const struct Record *record);

struct Pair func_03BC90(void)
{
    return func_03BC48(&D_00235140);
}
