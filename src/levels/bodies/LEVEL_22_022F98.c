/* LEVEL_22:0x022F98 -- placement copy of LEVEL_10_028230.c: saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_0015332C;
extern unsigned char D_001531F1;
extern void func_021A58(Rec *r, int n);
extern void func_021E10(int a, int b, int c);

void func_022F98(void)
{
    Blob saved;

    D_001531F1 = 1;
    saved = D_0015332C->blob;
    func_021A58(D_0015332C, 1);
    D_0015332C->blob = saved;
    func_021E10(0x92, 0xFF, 0xFF);
}
