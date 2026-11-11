/* LEVEL_04:0x166160 -- when the key is 0xFFFF and the flag is set, resets two global blocks and fills a 20-byte record with three handler pointers and a scaled constant. */

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

extern Pre04_166160 D_003AE140;
extern Rec04_166160 D_003AE150;
extern char D_00166020[];
extern char D_00166208[];
extern char D_00166340[];
extern float D_00244490;
extern void *memset(void *p, int c, unsigned int n);

void func_166160(int a0, int a1) {
    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 == 0) {
        return;
    }
    D_003AE140.a_00 = 0;
    D_003AE140.d_0C = 1.0f;
    D_003AE140.c_08 = 0;
    D_003AE140.b_04 = 0;
    memset(&D_003AE150, 0, 0x14);
    D_003AE150.p_00 = D_00166020;
    D_003AE150.p_04 = D_00166208;
    D_003AE150.p_0C = D_00166340;
    D_003AE150.f_10 = D_00244490 * 1.5f;
}
