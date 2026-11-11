/* LEVEL_04:0x166EF8 -- resets two global records when called with the sentinel 0xFFFF and a non-null arg. */
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

extern struct RecA D_003AE1A8;
extern struct RecB D_003AE1B8;
extern float D_0024479C;
extern char D_001E51C8[];
extern char D_00166DC0[];
extern char D_00166D18[];
extern char D_00166340[];
extern void *memset(void *p, int c, unsigned int n);

void func_166EF8(void *a0, unsigned int a1)
{
    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 == 0) {
        return;
    }
    D_003AE1A8.w_00 = 0;
    D_003AE1A8.f_0c = 1.0f;
    D_003AE1A8.w_08 = 0;
    D_003AE1A8.w_04 = 0;
    memset(&D_003AE1B8, 0, 0x14);
    D_003AE1B8.p_00 = D_00166DC0;
    D_003AE1B8.p_04 = D_001E51C8;
    D_003AE1B8.p_08 = D_00166D18;
    D_003AE1B8.p_0c = D_00166340;
    D_003AE1B8.f_10 = D_0024479C * 1.5f;
}
