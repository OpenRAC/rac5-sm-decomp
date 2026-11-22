/* LEVEL_22:0x031000 -- placement copy of LEVEL_01_03B3B0.c: returns the 64-bit value at the fixed record's offset. */
struct Pair {
    unsigned int low;
    int high;
};

struct Record {
    char pad[0x96c];
    struct Pair value;
} __attribute__((packed));

extern struct Record D_00186D40;
extern struct Pair func_030FB8(const struct Record *record);

struct Pair func_031000(void)
{
    return func_030FB8(&D_00186D40);
}
