/* LEVEL_09:0x12BB90 -- placement copy of FRONTEND_0205B8.c: placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_001F0B4C;
extern int MEMCARD_Busy__Fv(void);
extern int func_12BE58(int unused);
extern int func_12BD78(int unused);
extern int func_12BC10(void);

int func_12BB90(int unused)
{
    int r = 0;

    if (D_001F0B4C->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_12BE58(0) == 0 && func_12BD78(0) != 0 && func_12BC10() == 0)) {
        r = 1;
    }
    return r;
}
