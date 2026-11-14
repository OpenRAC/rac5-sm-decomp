/* LEVEL_10:0x05A970 -- placement copy of LEVEL_03_05A528.c: resets the shared controller from the argument, then starts the three channel fades at full strength and flags the block as active. */
typedef struct Block {
    char pad00[4];
    unsigned char active;
    char pad05[0x14 - 5];
    float f14;
    float f18;
    float f1C;
} Block;

extern char D_0023E540[];
extern Block D_00242318[];

extern void func_04A5B0(char *a, int b);
extern void func_03A4E8(char *a0);
extern void func_003668(float *vec, void *a1, void *a2, float f);
extern void func_003498(int a0, int a1, float f12, float f13);
extern void func_0034C8(int a0, int a1, float f12, float f13);
extern void func_0035E8(int a0, int a1, float f12, float f13);

void func_05A970(int arg)
{
    Block *b;

    func_04A5B0(D_0023E540, arg);
    func_03A4E8(D_0023E540);
    b = D_00242318;
    func_003668((float *)b, 0, (void *)3, 1.0f);
    b = (Block *)((char *)b - 8);
    func_003498(0, 3, b->f14, 1.0f);
    func_0034C8(0, 3, b->f18, 1.0f);
    func_0035E8(0, 3, b->f1C, 1.0f);
    b->active = 1;
}
