/* LEVEL_03:0x05A528 -- resets the shared controller from the argument, then starts the three channel fades at full strength and flags the block as active. */
typedef struct Block {
    char pad00[4];
    unsigned char active;
    char pad05[0x14 - 5];
    float f14;
    float f18;
    float f1C;
} Block;

extern char D_0024FFC0[];
extern Block D_00253D98[];

extern void func_04A168(char *a, int b);
extern void func_03A0C0(char *a0);
extern void func_0038F0(float *vec, void *a1, void *a2, float f);
extern void func_003720(int a0, int a1, float f12, float f13);
extern void func_003750(int a0, int a1, float f12, float f13);
extern void func_003870(int a0, int a1, float f12, float f13);

void func_05A528(int arg)
{
    Block *b;

    func_04A168(D_0024FFC0, arg);
    func_03A0C0(D_0024FFC0);
    b = D_00253D98;
    func_0038F0((float *)b, 0, (void *)3, 1.0f);
    b = (Block *)((char *)b - 8);
    func_003720(0, 3, b->f14, 1.0f);
    func_003750(0, 3, b->f18, 1.0f);
    func_003870(0, 3, b->f1C, 1.0f);
    b->active = 1;
}
