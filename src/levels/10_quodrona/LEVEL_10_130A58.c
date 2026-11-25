/* LEVEL_10:0x130A58 -- placement copy of FRONTEND_0205B8.c: placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_0020FCAC;
extern int MEMCARD_Busy__Fv(void);
extern int func_130D20(int unused);
extern int func_130C40(int unused);
extern int func_130AD8(void);

int func_130A58(int unused)
{
    int r = 0;

    if (D_0020FCAC->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_130D20(0) == 0 && func_130C40(0) != 0 && func_130AD8() == 0)) {
        r = 1;
    }
    return r;
}
