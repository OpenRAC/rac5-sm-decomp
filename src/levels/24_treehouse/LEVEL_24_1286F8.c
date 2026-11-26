/* LEVEL_24:0x1286F8 -- placement copy of FRONTEND_0205B8.c: placement copy of LEVEL_01_132BF8.c: reports whether saving is blocked: the first state word is set, the memory card is busy, or the three checks do not all pass. */
typedef struct {
    int w0;
    int w4;
} State;

extern State *D_001D7CCC;
extern int MEMCARD_Busy__Fv(void);
extern int func_1289C0(int unused);
extern int func_1288E0(int unused);
extern int func_128778(void);

int func_1286F8(int unused)
{
    int r = 0;

    if (D_001D7CCC->w4 != 0 || MEMCARD_Busy__Fv() != 0 ||
        (func_1289C0(0) == 0 && func_1288E0(0) != 0 && func_128778() == 0)) {
        r = 1;
    }
    return r;
}
