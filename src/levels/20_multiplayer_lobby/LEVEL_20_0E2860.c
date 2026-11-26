/* LEVEL_20:0x0E2860 -- placement copy of FRONTEND_0205B8.c: placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_0011721C;
extern int MEMCARD_Busy__Fv(void);
extern int func_0E2AA0(int unused);
extern int func_0E2A40(int unused);
extern int func_0E28E0(void);

int func_0E2860(int unused)
{
    int r = 0;

    if (D_0011721C->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_0E2AA0(0) == 0 && func_0E2A40(0) != 0 && func_0E28E0() == 0)) {
        r = 1;
    }
    return r;
}
