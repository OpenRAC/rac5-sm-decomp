/* LEVEL_06:0x038448 -- placement copy of LEVEL_01_03B3B0.c: returns the 64-bit value at the fixed record's offset. */
struct Pair {
    unsigned int low;
    int high;
};

struct Record {
    char pad[0x96c];
    struct Pair value;
} __attribute__((packed));

extern struct Record D_00221EC0;
extern struct Pair func_038400(const struct Record *record);

struct Pair func_038448(void)
{
    return func_038400(&D_00221EC0);
}
