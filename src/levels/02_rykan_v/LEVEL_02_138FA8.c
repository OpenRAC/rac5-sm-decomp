/* LEVEL_02:0x138FA8 -- placement copy of FRONTEND_0205B8.c: placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_0021C00C;
extern int MEMCARD_Busy__Fv(void);
extern int func_139270(int unused);
extern int func_139190(int unused);
extern int func_139028(void);

int func_138FA8(int unused)
{
    int r = 0;

    if (D_0021C00C->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_139270(0) == 0 && func_139190(0) != 0 && func_139028() == 0)) {
        r = 1;
    }
    return r;
}
