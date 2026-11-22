/* USA LEVEL_01.REL:0x0A1FF0, 284-byte candidate (21 November 2026).
 * Measured pinned: 12 differing words; first difference at 0xAC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long u64;

typedef struct {
    u32 w[4];
} DLIB_GIFTAG;

typedef struct {
    u8 enabled;
    u8 pad_01[3];
    u32 width;
    u8 first;
    u8 pad_09[3];
    u32 bits;
    u8 second;
    u8 pad_11;
    u8 extra;
} UiRegisterState;

extern char db_dlist[];
extern DLIB_GIFTAG g_cntTag[];
extern UiRegisterState D_0029EFF0;
extern void dlib_displist_direct_begin__FP13DLIB_DISPLIST(int *);
extern void dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(
    int *, u64, u64);
extern void dlib_displist_direct_end__FP13DLIB_DISPLIST(int *);

void func_0A1FF0(u8 first, u8 second, u32 bits)
{
    int *list = *(int **)(db_dlist + 0x54);
    u32 *q;
    u64 optional;
    u64 packed;
    u64 bits_part;
    u64 first_part;
    u64 second_part;
    u64 extra_part;

    D_0029EFF0.first = first;
    D_0029EFF0.bits = bits;
    D_0029EFF0.second = second;

    *(DLIB_GIFTAG *)list[2] = g_cntTag[0];
    q = (u32 *)list[1];
    q[3] = 0x13000000;
    q[1] = 0;
    q[2] = 0;
    q[0] = 0;
    list[1] += 0x10;
    *(u16 *)list[2] = 1;
    list[2] = list[1];
    list[1] += 0x10;
    dlib_displist_direct_begin__FP13DLIB_DISPLIST(list);

    bits_part = (u64)D_0029EFF0.bits << 1;
    first_part = D_0029EFF0.first;
    second_part = (u64)D_0029EFF0.second << 4;
    extra_part = (u64)D_0029EFF0.extra << 14;
    packed = second_part | first_part | bits_part | extra_part | 0x10000;
    if (D_0029EFF0.enabled)
        optional = (u64)D_0029EFF0.width << 17;
    else
        optional = 0x20000;
    packed |= optional;
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(list, packed, 0x47);
    dlib_displist_direct_end__FP13DLIB_DISPLIST(list);
}
