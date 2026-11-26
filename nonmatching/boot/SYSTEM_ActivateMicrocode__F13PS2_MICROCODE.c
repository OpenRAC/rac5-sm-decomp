/* USA SCUS_976.15 boot: SYSTEM_ActivateMicrocode__F13PS2_MICROCODE, 0x01E851D0.
 * Observed body: 460 bytes, followed by one alignment word; a separate small
 * routine follows inside the 472-byte interval.
 * Measured 26 November 2026: all 460 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. When the requested microcode differs from
 * the current one it is recorded, a counter tag packet is queued in the display
 * list, the matrix set for the microcode is selected (slot 5 for 0 and 0xB, slot 4
 * otherwise) and uploaded, a scissor quadword is queued for the microcodes
 * 3, 5, 6, 0xC, 0x14, 0x15 and 0x16, and the microcode program is added followed
 * by the base/offset/mscal command. Returns 1 when switched, 0 when unchanged.
 * The same C is accepted in the level sources (renamed here to the boot symbols);
 * the current microcode is re-read from memory in each test, and the seven-way
 * test is one chained condition in the order observed.
 */
typedef struct {
    unsigned int w[4];
} DLIB_GIFTAG;

extern int cur_MC[1];
extern int g_CurLoadedScreenMatrix;
extern char db_dlist[];
extern DLIB_GIFTAG g_cntTag[];
extern char scissor_giftag_textured[];
extern void *MICROCODE_TABLE[];

extern void *GetMatrix__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int type);
extern void dlib_displist_qw__FP13DLIB_DISPLISTiP6QWdatai(void *dl, int a, void *qw, int n);
extern void dlib_displist_mpg__FP13DLIB_DISPLISTP6QWdata(void *dl, void *qw);
extern void dlib_displist_base_offset_mscal__FP13DLIB_DISPLISTiii(void *dl, int a, int b, int c);
extern void SYSTEM_UploadMatrix__F15PS2_MATRIX_SLOTP7MATRIX4(int a, void *m);

int SYSTEM_ActivateMicrocode__F13PS2_MICROCODE(int mc)
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
                SYSTEM_UploadMatrix__F15PS2_MATRIX_SLOTP7MATRIX4(4, m);
            }
        } else {
            m = GetMatrix__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(4);
            if (m != 0) {
                g_CurLoadedScreenMatrix = 4;
                SYSTEM_UploadMatrix__F15PS2_MATRIX_SLOTP7MATRIX4(4, m);
            }
        }
        if (cur_MC[0] == 3 || cur_MC[0] == 5 || cur_MC[0] == 6 || cur_MC[0] == 0xC || cur_MC[0] == 0x16 || cur_MC[0] == 0x14 || cur_MC[0] == 0x15) {
            dlib_displist_qw__FP13DLIB_DISPLISTiP6QWdatai(*(void **)(dl + 0x54), 3, scissor_giftag_textured, 1);
        }
        dlib_displist_mpg__FP13DLIB_DISPLISTP6QWdata(*(void **)(dl + 0x54), MICROCODE_TABLE[mc]);
        dlib_displist_base_offset_mscal__FP13DLIB_DISPLISTiii(*(void **)(dl + 0x54), 0x3C, 0x18A, 0);
        return 1;
    }
    return 0;
}
