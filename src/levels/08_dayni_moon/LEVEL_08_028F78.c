/* LEVEL_08:0x028F78 -- placement copy of LEVEL_10_028230.c: saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_0023CB2C;
extern unsigned char D_0023C9F1;
extern void func_0276F0(Rec *r, int n);
extern void func_027AA8(int a, int b, int c);

void func_028F78(void)
{
    Blob saved;

    D_0023C9F1 = 1;
    saved = D_0023CB2C->blob;
    func_0276F0(D_0023CB2C, 1);
    D_0023CB2C->blob = saved;
    func_027AA8(0x92, 0xFF, 0xFF);
}
