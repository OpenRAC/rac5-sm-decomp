/* LEVEL_08:0x040508 -- placement copy of LEVEL_01_03B3B0.c: returns the 64-bit value at the fixed record's offset. */
struct Pair {
    unsigned int low;
    int high;
};

struct Record {
    char pad[0x96c];
    struct Pair value;
} __attribute__((packed));

extern struct Record D_002843D0;
extern struct Pair func_0404C0(const struct Record *record);

struct Pair func_040508(void)
{
    return func_0404C0(&D_002843D0);
}
