/* LEVEL_24:0x025F40 -- placement copy of LEVEL_10_028230.c: saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_001C4C2C;
extern unsigned char D_001C4AF1;
extern void func_0249F8(Rec *r, int n);
extern void func_024DB0(int a, int b, int c);

void func_025F40(void)
{
    Blob saved;

    D_001C4AF1 = 1;
    saved = D_001C4C2C->blob;
    func_0249F8(D_001C4C2C, 1);
    D_001C4C2C->blob = saved;
    func_024DB0(0x92, 0xFF, 0xFF);
}
