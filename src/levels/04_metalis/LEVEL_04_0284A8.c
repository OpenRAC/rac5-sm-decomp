/* LEVEL_04:0x0284A8 -- placement copy of LEVEL_10_028230.c: saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_0020D12C;
extern unsigned char D_0020CFF1;
extern void func_026D58(Rec *r, int n);
extern void func_027110(int a, int b, int c);

void func_0284A8(void)
{
    Blob saved;

    D_0020CFF1 = 1;
    saved = D_0020D12C->blob;
    func_026D58(D_0020D12C, 1);
    D_0020D12C->blob = saved;
    func_027110(0x92, 0xFF, 0xFF);
}
