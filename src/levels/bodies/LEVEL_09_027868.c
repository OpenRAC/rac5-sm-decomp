/* LEVEL_09:0x027868 -- placement copy of LEVEL_10_028230.c: saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_001DDDAC;
extern unsigned char D_001DDC71;
extern void func_0260D0(Rec *r, int n);
extern void func_026488(int a, int b, int c);

void func_027868(void)
{
    Blob saved;

    D_001DDC71 = 1;
    saved = D_001DDDAC->blob;
    func_0260D0(D_001DDDAC, 1);
    D_001DDDAC->blob = saved;
    func_026488(0x92, 0xFF, 0xFF);
}
