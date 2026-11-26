/* LEVEL_01:0x132BF8 -- placement copy of FRONTEND_0205B8.c: placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_0020704C;
extern int MEMCARD_Busy__Fv(void);
extern int func_132EC0(int unused);
extern int func_132DE0(int unused);
extern int func_132C78(void);

int func_132BF8(int unused)
{
    int r = 0;

    if (D_0020704C->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_132EC0(0) == 0 && func_132DE0(0) != 0 && func_132C78() == 0)) {
        r = 1;
    }
    return r;
}
