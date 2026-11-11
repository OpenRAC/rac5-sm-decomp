/* LEVEL_01:0x028A00 -- placement copy of LEVEL_10_028230.c: saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_001F3FAC;
extern unsigned char D_001F3E71;
extern void func_0270C8(Rec *r, int n);
extern void func_027480(int a, int b, int c);

void func_028A00(void)
{
    Blob saved;

    D_001F3E71 = 1;
    saved = D_001F3FAC->blob;
    func_0270C8(D_001F3FAC, 1);
    D_001F3FAC->blob = saved;
    func_027480(0x92, 0xFF, 0xFF);
}
