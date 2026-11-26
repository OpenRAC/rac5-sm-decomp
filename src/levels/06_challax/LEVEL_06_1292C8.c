/* LEVEL_06:0x1292C8 -- placement copy of FRONTEND_0205B8.c: placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_001F5C4C;
extern int MEMCARD_Busy__Fv(void);
extern int func_129590(int unused);
extern int func_1294B0(int unused);
extern int func_129348(void);

int func_1292C8(int unused)
{
    int r = 0;

    if (D_001F5C4C->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_129590(0) == 0 && func_1294B0(0) != 0 && func_129348() == 0)) {
        r = 1;
    }
    return r;
}
