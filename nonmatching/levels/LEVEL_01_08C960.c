/* USA LEVEL_01.REL:0x08C960. Provisional display-list packet setup.
 * This C preserves the two local payloads and their imported list calls.
 * Pinned GNU EE links 912 bytes against the 924-byte candidate body; the
 * first difference is at body byte 0 because the frame is larger than retail.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned int u128 __attribute__((mode(TI), aligned(16)));

typedef struct { u32 words[16]; } Block64;
typedef struct { u32 words[3]; } Block12;
typedef struct { u32 words[4]; } Block16;
typedef struct { u32 words[4]; } Giftag;
typedef struct {
    Block64 first;
    Block64 second;
    Block12 first_record;
    u32 first_gap;
    Block12 second_record;
    u32 second_gap;
    Block16 marker;
    Block16 final_record;
} Payload;
typedef struct {
    u32 unused;
    u32 *cur;
    u32 *begin;
} DisplayList;

extern char db_dlist[];
extern Giftag g_cntTag;
extern Block64 D_00217DC0;
extern Block12 D_0020FFC0;
extern Block12 D_0020FFD0;
extern Block16 D_0020FFE0;
extern u32 D_001F6308[];
extern u32 D_001F63D0, D_001F63D4;

extern void *memset(void *, int, unsigned int);
extern void dlib_displist_qw__FP13DLIB_DISPLISTiP6QWdatai(
    DisplayList *list, int index, void *data, int count);

void func_08C960(void)
{
    Payload payload;
    u128 zero = 0;
    DisplayList *list;
    u32 *packet;

    payload.first = D_00217DC0;
    payload.second = D_00217DC0;
    payload.first_record = D_0020FFC0;
    payload.second_record = D_0020FFD0;

    payload.first.words[0] = D_001F6308[0];
    payload.first.words[1] = D_001F6308[4];
    payload.first.words[4] = D_001F6308[1];
    payload.first.words[5] = D_001F6308[5];
    payload.first.words[8] = D_001F6308[2];
    payload.first.words[9] = D_001F6308[6];

    payload.second.words[0] = D_001F6308[8];
    payload.second.words[1] = D_001F6308[9];
    payload.second.words[2] = D_001F6308[10];
    payload.second.words[4] = D_001F6308[12];
    payload.second.words[5] = D_001F6308[13];
    payload.second.words[6] = D_001F6308[14];
    payload.second.words[8] = 0;
    payload.second.words[9] = 0;
    payload.second.words[10] = 0;
    payload.second.words[12] = 0x42000000;
    payload.second.words[13] = 0x42200000;
    payload.second.words[14] = 0x42200000;
    payload.second.words[15] = 0x43000000;

    D_001F63D0 = 0xFFFF0000u;
    D_001F63D4 = 0xFFFFFFFFu;
    memset(&payload.marker, 0, 16);
    payload.marker.words[3] = 0x3F800000u;
    payload.final_record = D_0020FFE0;

    list = *(DisplayList **)(db_dlist + 0x54);
    dlib_displist_qw__FP13DLIB_DISPLISTiP6QWdatai(list, 0x15, &payload.first, 3);
    dlib_displist_qw__FP13DLIB_DISPLISTiP6QWdatai(list, 0x18, &payload.second, 4);

    *(Giftag *)list->begin = g_cntTag;
    packet = list->cur;
    *(u128 *)packet = zero;
    packet[3] = 0x6C01001Cu;
    *(u128 *)(packet + 4) = *(u128 *)&payload.marker;
    *(u16 *)list->begin = 2;
    list->cur = packet + 12;
    list->begin = packet + 8;

    *(Giftag *)list->begin = g_cntTag;
    packet = list->cur;
    *(u128 *)packet = zero;
    packet[3] = 0x6C01001Du;
    *(u128 *)(packet + 4) = *(u128 *)&payload.final_record;
    *(u16 *)list->begin = 2;
    list->cur = packet + 12;
    list->begin = packet + 8;
}
