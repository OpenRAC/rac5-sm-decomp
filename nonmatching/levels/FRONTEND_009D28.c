/* USA FRONTEND.REL:0x009D28. Candidate display-list vertex run.
 * The complete body and all placements need linked byte comparison. */
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
extern u32 *D_00123094;
extern u8 D_0002B168;
extern void func_000071E0(int mode);
extern void dlib_displist_set_texture_state__FP13DLIB_DISPLISTiUlUlUlUl(
    DisplayList *list, int a, u64 b, u64 c, u64 d, u64 e);
extern void *memcpy(void *dest, const void *src, u32 bytes);

void func_00009D28(u32 count, u32 *vertices, u32 color, u32 depth) {
    u32 transparent = 0;
    u32 opaque = 1;
    u32 i;
    u32 encoded_count;
    u32 packed_color;
    u32 *base;
    u32 *out;
    u32 *end;
    DisplayContext *context;
    TagStorage tag;

    if (count > 60) {
        func_00009D28(60, vertices, color, depth);
        func_00009D28(count - 58, vertices + 174, color, depth);
        return;
    }

    context = &db_dlist;
    dlib_displist_set_texture_state__FP13DLIB_DISPLISTiUlUlUlUl(
        context->list, 1, 0, 1, 0x44, 0x7f00000000ull);
    func_000071E0(0);
    if (D_0002B168 != 0 && (color & 0xff000000u) == 0xff000000u) {
        transparent = 1;
        opaque = 0;
    }

    encoded_count = count << 16;
    for (i = 0; i < count; i++) *(float *)(vertices + i * 3 + 2) = (float)depth;

    tag.raw = 0;
    tag.bits.nloop = count;
    tag.bits.eop = 1;
    tag.bits.pre = 1;
    tag.bits.primitive = (opaque << 6) | (transparent << 7) | 0x10c;
    tag.bits.mode = 0;
    tag.bits.registers = 3;
    tag.bits.register_list = 0x413;

    *(Quadword *)context->list->begin = g_cntTag;
    base = context->list->current;
    D_00123094 = base;
    *D_00123094 = 0x01000404u;
    *++D_00123094 = 0;
    *++D_00123094 = 0;
    D_00123094[1] = 0x6c018000u;
    *(GifTag *)(base + 4) = tag.bits;

    D_00123094 = base + 8;
    *D_00123094 = 0x01000103u;
    *++D_00123094 = 0;
    *++D_00123094 = 0;
    D_00123094[1] = encoded_count | 0x6e008002u;
    out = base + 12;
    packed_color = ((color >> 1) & 0x7f000000u) | (color & 0x00ffffffu);
    for (i = 0; i < count; i++) *out++ = packed_color;

    D_00123094 = out;
    *out = 0;
    end = out + 4 + count * 3;
    *++D_00123094 = 0;
    *++D_00123094 = 0;
    *++D_00123094 = encoded_count | 0x68008003u;
    memcpy(out + 4, vertices, count * 12);
    out = end;
    while (((u32)out & 15u) != 0) *out++ = 0;

    D_00123094 = out;
    *out = 0x01000404u;
    *++D_00123094 = 0;
    *++D_00123094 = 0;
    *++D_00123094 = 0x17000000u;
    context->list->current = out + 4;
    *(unsigned short *)context->list->begin =
        ((u32)context->list->current - (u32)context->list->begin >> 4) - 1;
    context->list->begin = context->list->current;
    context->list->current += 4;
}
