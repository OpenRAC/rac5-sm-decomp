/* LEVEL_23:0x026570 -- placement copy of LEVEL_10_028230.c: saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_001C73AC;
extern unsigned char D_001C7271;
extern void func_024E20(Rec *r, int n);
extern void func_0251D8(int a, int b, int c);

void func_026570(void)
{
    Blob saved;

    D_001C7271 = 1;
    saved = D_001C73AC->blob;
    func_024E20(D_001C73AC, 1);
    D_001C73AC->blob = saved;
    func_0251D8(0x92, 0xFF, 0xFF);
}
