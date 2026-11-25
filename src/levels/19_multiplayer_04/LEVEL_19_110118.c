/* LEVEL_19:0x110118 -- placement copy of FRONTEND_0205B8.c: placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_001B5CDC;
extern int MEMCARD_Busy__Fv(void);
extern int func_110358(int unused);
extern int func_1102F8(int unused);
extern int func_110198(void);

int func_110118(int unused)
{
    int r = 0;

    if (D_001B5CDC->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_110358(0) == 0 && func_1102F8(0) != 0 && func_110198() == 0)) {
        r = 1;
    }
    return r;
}
