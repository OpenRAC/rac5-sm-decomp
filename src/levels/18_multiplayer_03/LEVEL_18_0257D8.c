/* LEVEL_18:0x0257D8 -- placement copy of LEVEL_10_028230.c: saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_001A2F34;
extern unsigned char D_001A2DFD;
extern void func_024118(Rec *r, int n);
extern void func_0244D0(int a, int b, int c);

void func_0257D8(void)
{
    Blob saved;

    D_001A2DFD = 1;
    saved = D_001A2F34->blob;
    func_024118(D_001A2F34, 1);
    D_001A2F34->blob = saved;
    func_0244D0(0x92, 0xFF, 0xFF);
}
