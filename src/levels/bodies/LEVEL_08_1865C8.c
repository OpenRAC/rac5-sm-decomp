/* LEVEL_08:0x1865C8 -- placement copy of LEVEL_04_17AF08.c: when the key is 0xFFFF and the flag is set, resets two global blocks and fills a 20-byte record. */

typedef struct Pre04_17AF08 {
    int a_00;
    int b_04;
    int c_08;
    float d_0C;
} Pre04_17AF08;

typedef struct Rec04_17AF08 {
    void *p_00;
    void *p_04;
    unsigned char pad_08[4];
    void *p_0C;
    float f_10;
} Rec04_17AF08;

extern Pre04_17AF08 D_003E5B50;
extern Rec04_17AF08 D_003E5B60;
extern char D_00186498[];
extern char D_001862F0[];
extern char D_0016D0D0[];
extern float D_00278B20;
extern void *memset(void *p, int c, unsigned int n);

void func_1865C8(int a0, int a1) {
    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 == 0) {
        return;
    }
    D_003E5B50.a_00 = 0;
    D_003E5B50.d_0C = 1.0f;
    D_003E5B50.c_08 = 0;
    D_003E5B50.b_04 = 0;
    memset(&D_003E5B60, 0, 0x14);
    D_003E5B60.p_00 = D_00186498;
    D_003E5B60.p_04 = D_001862F0;
    D_003E5B60.p_0C = D_0016D0D0;
    D_003E5B60.f_10 = D_00278B20;
}
