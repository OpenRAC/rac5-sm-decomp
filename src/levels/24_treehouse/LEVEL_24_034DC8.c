/* LEVEL_24:0x034DC8 -- placement copy of LEVEL_01_03B3B0.c: returns the 64-bit value at the fixed record's offset. */
struct Pair {
    unsigned int low;
    int high;
};

struct Record {
    char pad[0x96c];
    struct Pair value;
} __attribute__((packed));

extern struct Record D_00201040;
extern struct Pair func_034D80(const struct Record *record);

struct Pair func_034DC8(void)
{
    return func_034D80(&D_00201040);
}
