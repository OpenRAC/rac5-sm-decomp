/* boot:0x01E9C5E0 -- fills a GS display environment for the given picture format, size and position, based on the TV mode. Ported from OpenRAC/rac2-decomp src/core/00125970.c (sceGsSetDefDispEnv). */
typedef struct {
    short interMode;
    short outMode;
    short ffMode;
    short version;
} GsGParam;
typedef struct {
    unsigned long pmode;
    unsigned long smode2;
    unsigned long dispfb;
    unsigned long display;
    unsigned long bgcolor;
} GsDispEnv;
extern GsGParam *sceGsGetGParam(void);
extern void func_01E9C5D0(int, int *, int *, int *, int *);
extern int func_01E9C530(void);
extern void scePrintf();
extern char STR_unknown_mode_01F20CC0[];

void sceGsSetDefDispEnv(GsDispEnv *disp, short psm, short w, short h, short dx, short dy) {
    GsGParam *g_param;
    int dx1, dy1, dx2, dy2;
    int mode;
    short outMode;
    unsigned short interMode;

    g_param = sceGsGetGParam();
    if (g_param->outMode != 2 && g_param->outMode != 3 && func_01E9C530() != 0) {
        func_01E9C5D0(g_param->outMode, &dx1, &dy1, &dx2, &dy2);
    } else {
        dy2 = 0;
        dx2 = 0;
        dy1 = 0;
        dx1 = 0;
    }
    interMode = g_param->interMode;
    disp->pmode = 0x66;
    if (g_param->interMode != 0) {
        if (g_param->ffMode != 0) {
            disp->smode2 = 3;
        } else {
            disp->smode2 = 1;
        }
    } else {
        disp->smode2 = 2;
    }
    disp->dispfb = ((unsigned long)(psm & 0xF) << 15) |
                   ((unsigned long)(((w + 63) >> 6) & 0x3F) << 9);
    outMode = g_param->outMode;
    if (outMode == 2) {
        if ((short)interMode == 1) {
            int magh = (w + 2559) / w;
            unsigned long dxo = (unsigned long)dx1 + 636;
            disp->display = ((((unsigned long)(magh - 1) << 23) |
                            (((dx * magh + dxo) & 0xFFF) |
                             ((unsigned long)(g_param->ffMode ? (h << 1) - 1 : h - 1) << 44))) |
                            (((unsigned long)(dy + dy1 + 50) & 0xFFF) << 12)) |
                            ((unsigned long)(magh * w - 1) << 32);
        } else {
            int magh = (w + 2559) / w;
            unsigned long dxo = (unsigned long)dx1 + 636;
            magh = (w + 2559) / w;
            disp->display = ((((unsigned long)((w + 2559) / w - 1) << 23) |
                            (((dx * ((w + 2559) / w) + dxo) & 0xFFF) |
                             ((unsigned long)(h - 1) << 44))) |
                            (((unsigned long)(dy + dy1 + 25) & 0xFFF) << 12)) |
                            ((unsigned long)((w + 2559) / w * w - 1) << 32);
        }
    } else if (outMode == 3) {
        if ((short)interMode == 1) {
            int magh = (w + 2559) / w;
            unsigned long dxo = (unsigned long)dx1 + 656;
            disp->display = ((((unsigned long)(magh - 1) << 23) |
                            (((dx * magh + dxo) & 0xFFF) |
                             ((unsigned long)(g_param->ffMode ? (h << 1) - 1 : h - 1) << 44))) |
                            (((unsigned long)(dy + dy1 + 72) & 0xFFF) << 12)) |
                            ((unsigned long)(magh * w - 1) << 32);
        } else {
            int magh = (w + 2559) / w;
            unsigned long dxo = (unsigned long)dx1 + 656;
            magh = (w + 2559) / w;
            disp->display = ((((unsigned long)((w + 2559) / w - 1) << 23) |
                            (((dx * ((w + 2559) / w) + dxo) & 0xFFF) |
                             ((unsigned long)(h - 1) << 44))) |
                            (((unsigned long)(dy + dy1 + 36) & 0xFFF) << 12)) |
                            ((unsigned long)((w + 2559) / w * w - 1) << 32);
        }
    } else if (outMode == 0x50) {
        unsigned long dxo = (unsigned long)(dx * 2) + 232;
        disp->display = ((((unsigned long)(h - 1) << 44) |
                          ((((720 - w) / 2 * 2 + (unsigned long)dx1 + dxo) & 0xFFF) | 0x800000)) |
                         (((unsigned long)(dy + dy1 + 35) & 0xFFF) << 12)) |
                        ((unsigned long)(w * 2 - 1) << 32);
    } else {
        scePrintf(STR_unknown_mode_01F20CC0);
    }
    disp->bgcolor = 0;
}
