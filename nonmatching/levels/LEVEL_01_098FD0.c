/* USA LEVEL_01.REL:0x098FD0. Retained C hypothesis, not a match.
 * The pinned GNU EE profile links 812 bytes against 852 retail bytes;
 * first difference at body byte 4. */
typedef unsigned int u32;
typedef unsigned long long u64;

typedef struct __attribute__((packed, aligned(4))) {
    u64 words[8];
} Block64;

extern char D_0029AFB0[];
extern void func_0A5D38(u32 *a, u32 *b, u32 *c, u32 *d);
extern void func_0A5D00(u32 *a, u32 *b);
extern void func_098E68(float lead, float first, float second,
                        void *record, u32 a, u32 b, u32 c,
                        u32 d, u32 e, u32 f, int slot);

void func_098FD0(const Block64 *first_block, const float *values,
                 const Block64 *second_block, int slot)
{
    int displacement = slot * 0x170C;
    char *first = D_0029AFB0 + displacement;
    char *second = first + 0xE4;
    char *record = first - 0x40;
    float first_value = values[0];
    float second_value = values[5];
    u32 locals[12];

    *(Block64 *)first = *first_block;
    *(Block64 *)(first + 0x40) = *second_block;
    func_0A5D38(&locals[0], &locals[1], &locals[2], &locals[3]);
    func_0A5D00(&locals[4], &locals[5]);
    *(u32 *)(first + 0x9C) = 0;
    func_098E68(*(float *)(first + 0x9C), first_value, second_value,
                 record, locals[0], locals[1], locals[2],
                 locals[3], locals[4], locals[5], slot);

    *(Block64 *)second = *first_block;
    *(Block64 *)(second + 0x40) = *second_block;
    func_0A5D38(&locals[6], &locals[7], &locals[8], &locals[9]);
    func_0A5D00(&locals[10], &locals[11]);
    *(u32 *)(second + 0x9C) = 0;
    func_098E68(*(float *)(second + 0x9C), first_value, second_value,
                 record + 0xE4, locals[6], locals[7], locals[8],
                 locals[9], locals[10], locals[11], slot);
}
