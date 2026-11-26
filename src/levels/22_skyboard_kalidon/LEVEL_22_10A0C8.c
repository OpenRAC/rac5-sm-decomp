/* LEVEL_22:0x10A0C8 -- placement copy of FRONTEND_0205B8.c: placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_0016602C;
extern int MEMCARD_Busy__Fv(void);
extern int func_10A390(int unused);
extern int func_10A2B0(int unused);
extern int func_10A148(void);

int func_10A0C8(int unused)
{
    int r = 0;

    if (D_0016602C->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_10A390(0) == 0 && func_10A2B0(0) != 0 && func_10A148() == 0)) {
        r = 1;
    }
    return r;
}
