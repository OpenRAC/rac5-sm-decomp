/* LEVEL_24:0x0551F8 -- placement copy of LEVEL_03_05A528.c: resets the shared controller from the argument, then starts the three channel fades at full strength and flags the block as active. */
typedef struct Block {
    char pad00[4];
    unsigned char active;
    char pad05[0x14 - 5];
    float f14;
    float f18;
    float f1C;
} Block;

extern char D_00201040[];
extern Block D_00204E18[];

extern void func_044E90(char *a, int b);
extern void func_034EA8(char *a0);
extern void func_0036C0(float *vec, void *a1, void *a2, float f);
extern void func_0034F0(int a0, int a1, float f12, float f13);
extern void func_003520(int a0, int a1, float f12, float f13);
extern void func_003640(int a0, int a1, float f12, float f13);

void func_0551F8(int arg)
{
    Block *b;

    func_044E90(D_00201040, arg);
    func_034EA8(D_00201040);
    b = D_00204E18;
    func_0036C0((float *)b, 0, (void *)3, 1.0f);
    b = (Block *)((char *)b - 8);
    func_0034F0(0, 3, b->f14, 1.0f);
    func_003520(0, 3, b->f18, 1.0f);
    func_003640(0, 3, b->f1C, 1.0f);
    b->active = 1;
}
