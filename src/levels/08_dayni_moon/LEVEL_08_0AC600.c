/* LEVEL_08:0x0AC600 -- placement copy of LEVEL_01_0A1D08.c: switches the active microcode: queues the counter tag, picks the matrix set for it and uploads the program. */
typedef struct {
    unsigned int w[4];
} DLIB_GIFTAG;

extern int cur_MC[1];
extern int g_CurLoadedScreenMatrix;
extern char db_dlist[];
extern DLIB_GIFTAG g_cntTag[];
extern char D_0023F680[];
extern void *D_0023F6A0[];

extern void *GetMatrix__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int type);
extern void dlib_displist_qw__FP13DLIB_DISPLISTiP6QWdatai(void *dl, int a, void *qw, int n);
extern void dlib_displist_mpg__FP13DLIB_DISPLISTP6QWdata(void *dl, void *qw);
extern void dlib_displist_base_offset_mscal__FP13DLIB_DISPLISTiii(void *dl, int a, int b, int c);
extern void func_0AC040(int a, void *m);

int func_0AC600(int mc)
{
    char *dl;
    int *list;
    unsigned int *q;
    void *m;

    if (cur_MC[0] != mc) {
        cur_MC[0] = mc;
        dl = db_dlist;
        list = *(int **)(dl + 0x54);
        *(DLIB_GIFTAG *)list[2] = g_cntTag[0];
        q = (unsigned int *)list[1];
        q[3] = 0x13000000;
        q[1] = 0;
        q[2] = 0;
        q[0] = 0;
        list[1] += 0x10;
        *(unsigned short *)list[2] = 1;
        list[2] = list[1];
        list[1] += 0x10;
        if (cur_MC[0] == 0 || cur_MC[0] == 0xB) {
            m = GetMatrix__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(5);
            if (m != 0) {
                g_CurLoadedScreenMatrix = 5;
                func_0AC040(4, m);
            }
        } else {
            m = GetMatrix__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(4);
            if (m != 0) {
                g_CurLoadedScreenMatrix = 4;
                func_0AC040(4, m);
            }
        }
        if (cur_MC[0] == 3 || cur_MC[0] == 5 || cur_MC[0] == 6 || cur_MC[0] == 0xC || cur_MC[0] == 0x16 || cur_MC[0] == 0x14 || cur_MC[0] == 0x15) {
            dlib_displist_qw__FP13DLIB_DISPLISTiP6QWdatai(*(void **)(dl + 0x54), 3, D_0023F680, 1);
        }
        dlib_displist_mpg__FP13DLIB_DISPLISTP6QWdata(*(void **)(dl + 0x54), D_0023F6A0[mc]);
        dlib_displist_base_offset_mscal__FP13DLIB_DISPLISTiii(*(void **)(dl + 0x54), 0x3C, 0x18A, 0);
        return 1;
    }
    return 0;
}
