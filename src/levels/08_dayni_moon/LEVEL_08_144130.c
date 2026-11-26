/* LEVEL_08:0x144130 -- placement copy of FRONTEND_0205B8.c: placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_0024FF0C;
extern int MEMCARD_Busy__Fv(void);
extern int func_1443F8(int unused);
extern int func_144318(int unused);
extern int func_1441B0(void);

int func_144130(int unused)
{
    int r = 0;

    if (D_0024FF0C->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_1443F8(0) == 0 && func_144318(0) != 0 && func_1441B0() == 0)) {
        r = 1;
    }
    return r;
}
