/* USA FRONTEND.REL:0x006B68. Candidate frame-transfer sequence.
 * Complete linked bytes are required for matching credit. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef unsigned int u128 __attribute__((mode(TI), aligned(16)));

typedef struct __attribute__((packed, aligned(4))) {
    u64 lo;
    u64 hi;
} Quadword;

typedef struct {
    char pad0[4];
    u32 *current;
    u32 *begin;
} DisplayList;

typedef struct {
    char pad0[0x54];
    DisplayList *list;
} DisplayContext;

typedef struct {
    char pad0[10];
    u16 tag;
} RenderTarget;

extern DisplayContext db_dlist;
extern Quadword g_cntTag;
extern RenderTarget gRT_BackBuffer;
extern char D_0002B050[];
extern int D_0002B114;
extern int g_AspectRatioID;
extern char g_GSSettings[];
extern u8 g_bInFrame;
extern int cur_MC;

extern void func_00006120(int mode);
extern void func_00006200(RenderTarget *target);
extern void func_00006320(void);
extern void func_00007830(int mode);
extern void func_000073B8(int a, int b, int c);
extern void func_000079E0(int mode);
extern void func_0000A8C8(RenderTarget *target, int mode);
extern int func_00006748(int a, int b);
extern void func_000066F0(void);
extern void func_0000A5F0(int mode);
extern void func_00007BF8(void);
extern void func_0000A650(void *argument, int mode);
extern void func_000074D8(int a, int b);
extern void func_00007920(int mode);

extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(
    DisplayList *list, u64 mode);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(
    DisplayList *list, int a, int b);
extern void dlib_displist_direct_begin__FP13DLIB_DISPLIST(DisplayList *list);
extern void dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(
    DisplayList *list, u64 value, u64 reg);
extern void dlib_displist_direct_end__FP13DLIB_DISPLIST(DisplayList *list);
extern void FlushCache(int mode);
extern void dlib_displist_db_send_dma__FP16DLIB_DISPLIST_DB(DisplayContext *context);
extern void DelayThread(int ticks);
extern void sceDmaReset(int mode);
extern void sceGsResetPath(void);
extern void SYSTEM_SwapFrame__FP10GSSettingsiiibUi(
    void *settings, int frame, int a, int b, int aspect_is_zero, void *argument);

void func_00006B68(void *argument) {
    DisplayList *list;
    u16 previous_tag;
    int attempts;
    int busy;
    u128 marker;
    u32 *words;

    func_00006120(5);
    func_00006200((RenderTarget *)D_0002B050);
    func_00006320();
    func_00007830(0);
    func_000073B8(1, 0, 5);
    func_000079E0(1);

    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(db_dlist.list, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(db_dlist.list, 1, 1);
    previous_tag = gRT_BackBuffer.tag;
    gRT_BackBuffer.tag = 0x200;
    func_0000A8C8(&gRT_BackBuffer, 1);
    gRT_BackBuffer.tag = previous_tag;

    list = db_dlist.list;
    *(Quadword *)list->begin = g_cntTag;
    words = list->current;
    words[0] = 0;
    words[1] = 0;
    words[2] = 0;
    words[3] = 0x13000000u;
    list->current = words + 4;
    *(u16 *)list->begin = 1;
    list->begin = list->current;
    list->current += 4;

    list = db_dlist.list;
    *(Quadword *)list->begin = g_cntTag;
    words = list->current;
    words[0] = 0;
    words[1] = 0;
    words[2] = 0;
    words[3] = 0x13000000u;
    list->current = words + 4;
    *(u16 *)list->begin = 1;
    list->begin = list->current;
    list->current += 4;

    dlib_displist_direct_begin__FP13DLIB_DISPLIST(db_dlist.list);
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(db_dlist.list, 0, 0x61);
    dlib_displist_direct_end__FP13DLIB_DISPLIST(db_dlist.list);

    marker = (u128)(u64)0xfffffffff0000000ULL;
    *(u128 *)db_dlist.list->begin = marker;
    __builtin_rac5_sync();
    FlushCache(0);
    dlib_displist_db_send_dma__FP16DLIB_DISPLIST_DB(&db_dlist);

    attempts = 0;
    do {
        busy = func_00006748(1, 0);
        attempts++;
        DelayThread(0x50);
        if (attempts > 999) {
            sceDmaReset(1);
            sceGsResetPath();
            busy = func_00006748(0, 0);
        }
    } while (busy != 0);

    if (D_0002B114 != 0) func_000066F0();
    func_0000A5F0(0);
    SYSTEM_SwapFrame__FP10GSSettingsiiibUi(
        g_GSSettings, D_0002B114, 1, 1, g_AspectRatioID == 0, argument);
    g_bInFrame = 0;
    func_00007BF8();
    cur_MC = -1;
    D_0002B114++;
    func_0000A650(0, 0);
    func_00007830(1);
    func_000074D8(1, 1);
    func_000073B8(1, 0, 1);
    func_000079E0(1);
    func_00007920(0);
}
