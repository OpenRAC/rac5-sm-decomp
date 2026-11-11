/* LEVEL_20:0x022D30 -- placement copy of LEVEL_10_028230.c: saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_00104194;
extern unsigned char D_0010405D;
extern void func_0216E0(Rec *r, int n);
extern void func_021A98(int a, int b, int c);

void func_022D30(void)
{
    Blob saved;

    D_0010405D = 1;
    saved = D_00104194->blob;
    func_0216E0(D_00104194, 1);
    D_00104194->blob = saved;
    func_021A98(0x92, 0xFF, 0xFF);
}
