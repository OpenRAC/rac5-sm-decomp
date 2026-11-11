/* LEVEL_03:0x0287F8 -- placement copy of LEVEL_10_028230.c: saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_0020C62C;
extern unsigned char D_0020C4F1;
extern void func_026FA8(Rec *r, int n);
extern void func_027360(int a, int b, int c);

void func_0287F8(void)
{
    Blob saved;

    D_0020C4F1 = 1;
    saved = D_0020C62C->blob;
    func_026FA8(D_0020C62C, 1);
    D_0020C62C->blob = saved;
    func_027360(0x92, 0xFF, 0xFF);
}
