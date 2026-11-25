/* LEVEL_04:0x13F078 -- placement copy of FRONTEND_0205B8.c: placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_0022046C;
extern int MEMCARD_Busy__Fv(void);
extern int func_13F340(int unused);
extern int func_13F260(int unused);
extern int func_13F0F8(void);

int func_13F078(int unused)
{
    int r = 0;

    if (D_0022046C->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_13F340(0) == 0 && func_13F260(0) != 0 && func_13F0F8() == 0)) {
        r = 1;
    }
    return r;
}
