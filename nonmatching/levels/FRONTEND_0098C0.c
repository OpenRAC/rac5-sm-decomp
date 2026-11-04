/* USA FRONTEND.REL:0x0098C0. Retained C hypothesis, not a match.
 * Pinned GNU EE links 1108 bytes versus a 1124-byte complete body; first
 * difference at body byte 14. Reopen with the original parameter lifetimes
 * and the 16-byte tag initialization shape. */
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef struct __attribute__((packed, aligned(4))) {
    u64 lo;
    u64 hi;
} Quadword;

typedef struct __attribute__((packed, aligned(4))) {
    u64 nloop : 15;
    u64 eop : 1;
    u64 unused : 30;
    u64 pre : 1;
    u64 primitive : 11;
    u64 mode : 2;
    u64 registers : 4;
    u64 register_list;
} GifTag;

typedef unsigned int u128 __attribute__((mode(TI), aligned(16)));
typedef union { u128 raw; GifTag bits; } TagStorage;

typedef struct __attribute__((packed, aligned(4))) {
    u32 x;
    u32 y;
    float z;
} VertexPosition;

typedef struct {
    char pad0[4];
    u32 *current;
    u32 *begin;
} DisplayList;

typedef struct {
    char pad0[0x54];
    DisplayList *list;
} DisplayContext;

extern DisplayContext db_dlist;
extern Quadword g_cntTag;
extern u32 *D_00123090;
extern u8 D_0002B168;
extern void func_000071E0(int mode);

void func_000098C0(u32 count, u32 *vertices, u32 depth) {
    u32 opaque = 1;
    u32 transparent = 0;
    u32 i;
    u32 encoded_count;
    u32 *base;
    u32 *out;
    DisplayContext *context;
    TagStorage tag;

    if (vertices == 0 || count < 3) return;
    if (count > 60) {
        count -= 58;
        func_000098C0(60, vertices, depth);
        func_000098C0(count, vertices + 0xe8, depth);
        return;
    }

    context = &db_dlist;
    func_000071E0(0);
    if (D_0002B168 != 0 && (vertices[0] & 0xff000000u) == 0xff000000u) {
        transparent = 1;
        opaque = 0;
    }

    encoded_count = count << 16;
    for (i = 0; i < count; i++) *(float *)(vertices + i * 4 + 3) = (float)depth;

    tag.raw = 0;
    tag.bits.nloop = count;
    tag.bits.eop = 1;
    tag.bits.pre = 1;
    tag.bits.primitive = (transparent << 7) | (opaque << 6) | 0x10c;
    tag.bits.mode = 0;
    tag.bits.registers = 3;
    tag.bits.register_list = 0x413;

    *(Quadword *)context->list->begin = g_cntTag;
    base = context->list->current;
    D_00123090 = base;
    *D_00123090 = 0x01000404u;
    *++D_00123090 = 0;
    *++D_00123090 = 0;
    D_00123090[1] = 0x6c018000u;
    *(GifTag *)(base + 4) = tag.bits;

    D_00123090 = base + 8;
    *D_00123090 = 0x01000103u;
    *++D_00123090 = 0;
    *++D_00123090 = 0;
    D_00123090[1] = encoded_count | 0x6e008002u;

    out = base + 12;
    for (i = 0; i < count; i++) {
        u32 color = vertices[i * 4];
        *out++ = ((color >> 1) & 0x7f000000u) | (color & 0x00ffffffu);
    }
    while (((u32)out & 15u) != 0) *out++ = 0;

    D_00123090 = out;
    *out = 0;
    out += 4;
    *++D_00123090 = 0;
    *++D_00123090 = 0;
    D_00123090[1] = encoded_count | 0x68008003u;

    for (i = 0; i < count; i++) {
        *(VertexPosition *)out = *(VertexPosition *)(vertices + i * 4 + 1);
        out += 3;
    }
    while (((u32)out & 15u) != 0) *out++ = 0;

    D_00123090 = out;
    *out = 0x01000404u;
    *++D_00123090 = 0;
    *++D_00123090 = 0;
    *++D_00123090 = 0x17000000u;
    context->list->current = out + 4;
    *(unsigned short *)context->list->begin = ((u32)context->list->current - (u32)context->list->begin >> 4) - 1;
    context->list->begin = context->list->current;
    context->list->current += 4;
}
