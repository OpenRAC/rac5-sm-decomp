typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct {
    char reserved[8];
    u16 width;
    u16 height;
} RenderTarget;

extern RenderTarget gRT_BackBuffer;
extern char db_dlist[];
extern char D_0002B050[];
extern char g_GSSettings[];
extern u32 g_ENG_ClearColor;
extern u8 g_bInFrame;
extern int cur_MC;
extern u32 D_0010EC84;
extern int D_0002B110;

extern void func_00006468(void);
extern void func_00006558(void);
extern void func_00006120(int);
extern void func_00006200(void *);
extern void func_00007830(int);
extern void func_000073B8(int, int, int);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *, unsigned long);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *, int, int);
extern void func_0000A150(short, short, short, short, u32, u32);
extern void func_0000A8C8(RenderTarget *, int);
extern void dlib_displist_direct_begin__FP13DLIB_DISPLIST(void *);
extern void dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(void *, unsigned long, unsigned long);
extern void dlib_displist_direct_end__FP13DLIB_DISPLIST(void *);
extern void FlushCache(int);
extern int func_00006748(int, int);
extern void DelayThread(int);
extern void sceDmaReset(int);
extern void sceGsResetPath(void);
extern void func_000064B8(u32);
extern void func_0000A5F0(int);
extern void SYSTEM_SwapFrame__FP10GSSettingsiiibUi(void *, int, int, int, int, u32);
extern void dlib_displist_db_send_dma__FP16DLIB_DISPLIST_DB(void *);
extern void func_00007BF8(void);
extern void func_00006528(void);
extern void func_0000A650(RenderTarget *, int);
extern void func_000074D8(int, int);
extern void func_000079E0(int);
extern void func_00007920(int);

void func_00006850(int unused, u32 frame_argument)
{
    RenderTarget *back = &gRT_BackBuffer;
    char *db = db_dlist;
    void *list;
    u16 saved_height;
    u32 timeout;
    int dma_busy;
    u32 column;

    func_00006468();
    func_00006558();
    func_00006120(5);
    func_00006200(D_0002B050);
    func_00007830(0);
    func_000073B8(1, 0, 5);
    list = *(void **)(db + 0x54);
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(list, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(list, 1, 1);

    func_0000A150(0, 0, 1, (short)back->height, 0xff000000, 0);
    func_0000A150((short)(back->width - 1), 0, 1,
                  (short)back->height, 0xff000000, 0);
    func_0000A150(0, 0, (short)back->width, 1, 0xff000000, 0);
    func_0000A150(0, (short)(back->height - 1),
                  (short)back->width, 1, 0xff000000, 0);

    saved_height = back->height;
    back->height = 0x200;
    func_0000A8C8(back, 1);
    back->height = saved_height;
    list = *(void **)(db + 0x54);
    dlib_displist_direct_begin__FP13DLIB_DISPLIST(list);
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(list, 0, 0x61);
    dlib_displist_direct_end__FP13DLIB_DISPLIST(list);

    __builtin_rac5_sync();
    timeout = 0;
    FlushCache(0);
    do {
        dma_busy = func_00006748(1, 0);
        timeout++;
        DelayThread(0x50);
        if (timeout > 999) {
            sceDmaReset(1);
            sceGsResetPath();
            dma_busy = func_00006748(0, 0);
        }
    } while (dma_busy != 0);

    func_000064B8(D_0010EC84);
    func_0000A5F0(0);
    SYSTEM_SwapFrame__FP10GSSettingsiiibUi(g_GSSettings, D_0002B110,
                                             1, 1, 0, frame_argument);
    list = *(void **)(db + 0x54);
    g_bInFrame = 0;
    D_0010EC84 = ((int)(((u32 *)list)[1] - ((u32 *)list)[0]) >> 4) << 4;
    dlib_displist_db_send_dma__FP16DLIB_DISPLIST_DB(db);
    func_00007BF8();
    cur_MC = -1;
    D_0002B110++;
    func_00006528();
    func_0000A650(back, 0);
    func_00007830(1);
    func_000074D8(1, 1);
    func_000073B8(1, 0, 1);
    func_000079E0(1);
    func_00007920(0);
    list = *(void **)(db + 0x54);
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(list, 0x2a);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(list, 0, 0);
    for (column = 0; column < 8; ++column) {
        func_0000A150((short)(column * 64), 0, 0x40, 0x1a0,
                      g_ENG_ClearColor, 0);
    }
}
