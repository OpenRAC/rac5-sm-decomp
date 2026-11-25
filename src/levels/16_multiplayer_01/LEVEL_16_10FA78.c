/* LEVEL_16:0x10FA78 -- placement copy of FRONTEND_0205B8.c: placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_001B4B5C;
extern int MEMCARD_Busy__Fv(void);
extern int func_10FCB8(int unused);
extern int func_10FC58(int unused);
extern int func_10FAF8(void);

int func_10FA78(int unused)
{
    int r = 0;

    if (D_001B4B5C->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_10FCB8(0) == 0 && func_10FC58(0) != 0 && func_10FAF8() == 0)) {
        r = 1;
    }
    return r;
}
