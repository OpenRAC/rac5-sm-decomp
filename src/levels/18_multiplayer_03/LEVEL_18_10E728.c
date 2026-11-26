/* LEVEL_18:0x10E728 -- placement copy of FRONTEND_0205B8.c: placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_001B5FDC;
extern int MEMCARD_Busy__Fv(void);
extern int func_10E968(int unused);
extern int func_10E908(int unused);
extern int func_10E7A8(void);

int func_10E728(int unused)
{
    int r = 0;

    if (D_001B5FDC->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_10E968(0) == 0 && func_10E908(0) != 0 && func_10E7A8() == 0)) {
        r = 1;
    }
    return r;
}
