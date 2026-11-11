/* LEVEL_19:0x025DD0 -- placement copy of LEVEL_10_028230.c: saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_001A2C34;
extern unsigned char D_001A2AFD;
extern void func_024710(Rec *r, int n);
extern void func_024AC8(int a, int b, int c);

void func_025DD0(void)
{
    Blob saved;

    D_001A2AFD = 1;
    saved = D_001A2C34->blob;
    func_024710(D_001A2C34, 1);
    D_001A2C34->blob = saved;
    func_024AC8(0x92, 0xFF, 0xFF);
}
