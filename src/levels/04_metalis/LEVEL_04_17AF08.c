/* LEVEL_04:0x17AF08 -- when the key is 0xFFFF and the flag is set, resets two global blocks and fills a 20-byte record. */

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

extern Pre04_17AF08 D_003B0608;
extern Rec04_17AF08 D_003B0618;
extern char D_0017ADD8[];
extern char D_0017AC30[];
extern char D_00166340[];
extern float D_00244490;
extern void *memset(void *p, int c, unsigned int n);

void func_17AF08(int a0, int a1) {
    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 == 0) {
        return;
    }
    D_003B0608.a_00 = 0;
    D_003B0608.d_0C = 1.0f;
    D_003B0608.c_08 = 0;
    D_003B0608.b_04 = 0;
    memset(&D_003B0618, 0, 0x14);
    D_003B0618.p_00 = D_0017ADD8;
    D_003B0618.p_04 = D_0017AC30;
    D_003B0618.p_0C = D_00166340;
    D_003B0618.f_10 = D_00244490;
}
