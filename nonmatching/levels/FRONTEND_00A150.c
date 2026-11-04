/* USA FRONTEND.REL:0x00A150. Retained C hypothesis, not a match.
 * The pinned GNU EE profile links 1116 bytes against a 1168-byte body;
 * first difference at body byte 8. See docs/MATCHING-BLOCKERS.md. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef unsigned int u128 __attribute__((mode(TI), aligned(16)));

typedef struct {
    u32 word[4];
} Qword;

typedef struct {
    u8 pad[4];
    u32 *cur;
    u32 *begin;
} DisplayList;

/* GIF tag field widths follow the observed hardware packet layout. */
typedef struct {
    u64 nloop : 15;
    u64 eop : 1;
    u64 reserved : 30;
    u64 pre : 1;
    u64 prim : 11;
    u64 flg : 2;
    u64 nreg : 4;
    u64 regs;
} GifTag;

typedef union {
    u128 bits;
    GifTag fields;
    Qword words;
} TagValue;

extern char db_dlist[];
extern Qword g_cntTag;
extern u8 D_0002B091;
extern u32 *D_00123098;
extern void func_000071E0(int);

void func_0000A150(u16 x, u16 y, short width, short height,
                   u32 color, u32 depth)
{
    DisplayList *list;
    u32 *packet;
    u32 pixel_color;
    char *db = db_dlist;
    TagValue tag;
    Qword packet_tag;

    func_000071E0(0);
    tag.bits = 0;
    tag.fields.nloop = 4;
    tag.fields.eop = 1;
    tag.fields.pre = 1;
    tag.fields.prim = ((D_0002B091 & 0x1f) << 6) | 0x10c;
    tag.fields.nreg = 3;
    tag.fields.regs = 0x413;

    list = *(DisplayList **)(db + 0x54);
    *(Qword *)list->begin = g_cntTag;
    packet = list->cur;
    D_00123098 = packet;
    pixel_color = (color >> 1 & 0x7f000000) | (color & 0xffffff);

    *D_00123098 = 0x01000404;
    *++D_00123098 = 0;
    *++D_00123098 = 0;
    D_00123098[1] = 0x6c018000;
    packet_tag = tag.words;
    *(Qword *)(packet + 4) = packet_tag;

    D_00123098 = packet + 8;
    *D_00123098 = 0x01000103;
    *++D_00123098 = 0;
    *++D_00123098 = 0;
    D_00123098[1] = 0x6e048002;
    packet[12] = pixel_color;
    packet[13] = pixel_color;
    packet[15] = pixel_color;
    packet[14] = pixel_color;

    D_00123098 = packet + 16;
    *D_00123098 = 0;
    *++D_00123098 = 0;
    *++D_00123098 = 0;
    D_00123098[1] = 0x68048003;
    ((float *)(packet + 20))[0] = (float)x;
    ((float *)(packet + 20))[1] = (float)y;
    ((float *)(packet + 20))[2] = (float)depth;
    ((float *)(packet + 20))[3] = (float)(x + width);
    ((float *)(packet + 20))[4] = (float)y;
    ((float *)(packet + 20))[5] = (float)depth;
    ((float *)(packet + 20))[6] = (float)x;
    ((float *)(packet + 20))[7] = (float)(y + height);
    ((float *)(packet + 20))[8] = (float)depth;
    ((float *)(packet + 20))[9] = (float)(x + width);
    ((float *)(packet + 20))[10] = (float)(y + height);
    ((float *)(packet + 20))[11] = (float)depth;

    D_00123098 = packet + 32;
    *D_00123098 = 0x01000404;
    *++D_00123098 = 0;
    *++D_00123098 = 0;
    D_00123098[1] = 0x17000000;
    list->cur = packet + 36;
    *(u16 *)list->begin = ((u8 *)list->cur - (u8 *)list->begin) / 16 - 1;
    list->begin = list->cur;
    list->cur += 4;
}
