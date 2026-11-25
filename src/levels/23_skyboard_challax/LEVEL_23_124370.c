/* LEVEL_23:0x124370 -- placement copy of FRONTEND_0205B8.c: placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_001DA44C;
extern int MEMCARD_Busy__Fv(void);
extern int func_124638(int unused);
extern int func_124558(int unused);
extern int func_1243F0(void);

int func_124370(int unused)
{
    int r = 0;

    if (D_001DA44C->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_124638(0) == 0 && func_124558(0) != 0 && func_1243F0() == 0)) {
        r = 1;
    }
    return r;
}
