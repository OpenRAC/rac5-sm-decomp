/* LEVEL_07:0x135BF8 -- placement copy of FRONTEND_0205B8.c: placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_0021B34C;
extern int MEMCARD_Busy__Fv(void);
extern int func_135EC0(int unused);
extern int func_135DE0(int unused);
extern int func_135C78(void);

int func_135BF8(int unused)
{
    int r = 0;

    if (D_0021B34C->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_135EC0(0) == 0 && func_135DE0(0) != 0 && func_135C78() == 0)) {
        r = 1;
    }
    return r;
}
