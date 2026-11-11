/* LEVEL_10:0x028230 -- saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_001FCFAC;
extern unsigned char D_001FCE71;
extern void func_0269A8(Rec *r, int n);
extern void func_026D60(int a, int b, int c);

void func_028230(void)
{
    Blob saved;

    D_001FCE71 = 1;
    saved = D_001FCFAC->blob;
    func_0269A8(D_001FCFAC, 1);
    D_001FCFAC->blob = saved;
    func_026D60(0x92, 0xFF, 0xFF);
}
