/* LEVEL_05:0x12E570 -- placement copy of FRONTEND_0205B8.c: placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_001F60CC;
extern int MEMCARD_Busy__Fv(void);
extern int func_12E838(int unused);
extern int func_12E758(int unused);
extern int func_12E5F0(void);

int func_12E570(int unused)
{
    int r = 0;

    if (D_001F60CC->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_12E838(0) == 0 && func_12E758(0) != 0 && func_12E5F0() == 0)) {
        r = 1;
    }
    return r;
}
