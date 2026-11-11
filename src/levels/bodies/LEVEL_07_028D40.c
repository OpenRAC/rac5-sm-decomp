/* LEVEL_07:0x028D40 -- placement copy of LEVEL_10_028230.c: saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_002082AC;
extern unsigned char D_00208171;
extern void func_027428(Rec *r, int n);
extern void func_0277E0(int a, int b, int c);

void func_028D40(void)
{
    Blob saved;

    D_00208171 = 1;
    saved = D_002082AC->blob;
    func_027428(D_002082AC, 1);
    D_002082AC->blob = saved;
    func_0277E0(0x92, 0xFF, 0xFF);
}
