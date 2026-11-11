/* LEVEL_17:0x025BA8 -- placement copy of LEVEL_10_028230.c: saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_001950B4;
extern unsigned char D_00194F7D;
extern void func_0244E8(Rec *r, int n);
extern void func_0248A0(int a, int b, int c);

void func_025BA8(void)
{
    Blob saved;

    D_00194F7D = 1;
    saved = D_001950B4->blob;
    func_0244E8(D_001950B4, 1);
    D_001950B4->blob = saved;
    func_0248A0(0x92, 0xFF, 0xFF);
}
