/* LEVEL_21:0x0F1AC0 -- placement copy of FRONTEND_0205B8.c: placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_0015B9AC;
extern int MEMCARD_Busy__Fv(void);
extern int func_0F1D88(int unused);
extern int func_0F1CA8(int unused);
extern int func_0F1B40(void);

int func_0F1AC0(int unused)
{
    int r = 0;

    if (D_0015B9AC->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_0F1D88(0) == 0 && func_0F1CA8(0) != 0 && func_0F1B40() == 0)) {
        r = 1;
    }
    return r;
}
