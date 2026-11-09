/* LEVEL_08:0x16DBC0 -- placement copy of LEVEL_04_166EF8.c: resets two global records when called with the sentinel 0xFFFF and a non-null arg. */
struct RecA {
    int w_00;
    int w_04;
    int w_08;
    float f_0c;
};

struct RecB {
    char *p_00;
    char *p_04;
    char *p_08;
    char *p_0c;
    float f_10;
};

extern struct RecA D_003E2D18;
extern struct RecB D_003E2D28;
extern float D_00278EA4;
extern char D_0020CD98[];
extern char D_0016DA88[];
extern char D_0016D9E0[];
extern char D_0016D0D0[];
extern void *memset(void *p, int c, unsigned int n);

void func_16DBC0(void *a0, unsigned int a1)
{
    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 == 0) {
        return;
    }
    D_003E2D18.w_00 = 0;
    D_003E2D18.f_0c = 1.0f;
    D_003E2D18.w_08 = 0;
    D_003E2D18.w_04 = 0;
    memset(&D_003E2D28, 0, 0x14);
    D_003E2D28.p_00 = D_0016DA88;
    D_003E2D28.p_04 = D_0020CD98;
    D_003E2D28.p_08 = D_0016D9E0;
    D_003E2D28.p_0c = D_0016D0D0;
    D_003E2D28.f_10 = D_00278EA4 * 1.5f;
}
