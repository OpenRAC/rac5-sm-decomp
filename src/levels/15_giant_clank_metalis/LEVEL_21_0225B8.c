/* LEVEL_21:0x0225B8 -- placement copy of LEVEL_10_028230.c: saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_00148C2C;
extern unsigned char D_00148AF1;
extern void func_0210B8(Rec *r, int n);
extern void func_021470(int a, int b, int c);

void func_0225B8(void)
{
    Blob saved;

    D_00148AF1 = 1;
    saved = D_00148C2C->blob;
    func_0210B8(D_00148C2C, 1);
    D_00148C2C->blob = saved;
    func_021470(0x92, 0xFF, 0xFF);
}
