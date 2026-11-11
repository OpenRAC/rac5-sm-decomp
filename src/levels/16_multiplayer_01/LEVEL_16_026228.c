/* LEVEL_16:0x026228 -- placement copy of LEVEL_10_028230.c: saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_001A1AB4;
extern unsigned char D_001A197D;
extern void func_024B68(Rec *r, int n);
extern void func_024F20(int a, int b, int c);

void func_026228(void)
{
    Blob saved;

    D_001A197D = 1;
    saved = D_001A1AB4->blob;
    func_024B68(D_001A1AB4, 1);
    D_001A1AB4->blob = saved;
    func_024F20(0x92, 0xFF, 0xFF);
}
