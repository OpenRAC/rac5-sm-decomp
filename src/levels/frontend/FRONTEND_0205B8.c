/* FRONTEND:0x0205B8 -- placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_00032814;
extern int MEMCARD_Busy__Fv(void);
extern int func_020890(int unused);
extern int func_0207B0(int unused);
extern int func_020638(void);

int func_0205B8(int unused)
{
    int r = 0;

    if (D_00032814->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_020890(0) == 0 && func_0207B0(0) != 0 && func_020638() == 0)) {
        r = 1;
    }
    return r;
}
