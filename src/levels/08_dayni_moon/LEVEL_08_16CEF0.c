/* LEVEL_08:0x16CEF0 -- placement copy of LEVEL_04_166160.c: when the key is 0xFFFF and the flag is set, resets two global blocks and fills a 20-byte record with three handler pointers and a scaled constant. */

typedef struct Pre04_166160 {
    int a_00;
    int b_04;
    int c_08;
    float d_0C;
} Pre04_166160;

typedef struct Rec04_166160 {
    void *p_00;
    void *p_04;
    unsigned char pad_08[4];
    void *p_0C;
    float f_10;
} Rec04_166160;

extern Pre04_166160 D_003E2CC0;
extern Rec04_166160 D_003E2CD0;
extern char D_0016CDB0[];
extern char D_0016CF98[];
extern char D_0016D0D0[];
extern float D_00278B20;
extern void *memset(void *p, int c, unsigned int n);

void func_16CEF0(int a0, int a1) {
    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 == 0) {
        return;
    }
    D_003E2CC0.a_00 = 0;
    D_003E2CC0.d_0C = 1.0f;
    D_003E2CC0.c_08 = 0;
    D_003E2CC0.b_04 = 0;
    memset(&D_003E2CD0, 0, 0x14);
    D_003E2CD0.p_00 = D_0016CDB0;
    D_003E2CD0.p_04 = D_0016CF98;
    D_003E2CD0.p_0C = D_0016D0D0;
    D_003E2CD0.f_10 = D_00278B20 * 1.5f;
}
