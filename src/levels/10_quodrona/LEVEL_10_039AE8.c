/* LEVEL_10:0x039AE8 -- placement copy of LEVEL_01_03B3B0.c: returns the 64-bit value at the fixed record's offset. */
struct Pair {
    unsigned int low;
    int high;
};

struct Record {
    char pad[0x96c];
    struct Pair value;
} __attribute__((packed));

extern struct Record D_0023E540;
extern struct Pair func_039AA0(const struct Record *record);

struct Pair func_039AE8(void)
{
    return func_039AA0(&D_0023E540);
}
