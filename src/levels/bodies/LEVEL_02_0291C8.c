/* LEVEL_02:0x0291C8 -- placement copy of LEVEL_10_028230.c: saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_00208C2C;
extern unsigned char D_00208AF1;
extern void func_0278B0(Rec *r, int n);
extern void func_027C68(int a, int b, int c);

void func_0291C8(void)
{
    Blob saved;

    D_00208AF1 = 1;
    saved = D_00208C2C->blob;
    func_0278B0(D_00208C2C, 1);
    D_00208C2C->blob = saved;
    func_027C68(0x92, 0xFF, 0xFF);
}
