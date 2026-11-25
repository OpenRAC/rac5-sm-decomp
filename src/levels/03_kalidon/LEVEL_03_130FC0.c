/* LEVEL_03:0x130FC0 -- placement copy of FRONTEND_0205B8.c: placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_0021F6CC;
extern int MEMCARD_Busy__Fv(void);
extern int func_131288(int unused);
extern int func_1311A8(int unused);
extern int func_131040(void);

int func_130FC0(int unused)
{
    int r = 0;

    if (D_0021F6CC->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_131288(0) == 0 && func_1311A8(0) != 0 && func_131040() == 0)) {
        r = 1;
    }
    return r;
}
