/* LEVEL_05:0x027678 -- placement copy of LEVEL_10_028230.c: saves a record block, runs a reset call and restores the block. */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_001E332C;
extern unsigned char D_001E31F1;
extern void func_025E08(Rec *r, int n);
extern void func_0261C0(int a, int b, int c);

void func_027678(void)
{
    Blob saved;

    D_001E31F1 = 1;
    saved = D_001E332C->blob;
    func_025E08(D_001E332C, 1);
    D_001E332C->blob = saved;
    func_0261C0(0x92, 0xFF, 0xFF);
}
