/* LEVEL_06:0x026DE8 -- placement copy of LEVEL_10_028230.c: saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_001E2EAC;
extern unsigned char D_001E2D71;
extern void func_025578(Rec *r, int n);
extern void func_025930(int a, int b, int c);

void func_026DE8(void)
{
    Blob saved;

    D_001E2D71 = 1;
    saved = D_001E2EAC->blob;
    func_025578(D_001E2EAC, 1);
    D_001E2EAC->blob = saved;
    func_025930(0x92, 0xFF, 0xFF);
}
