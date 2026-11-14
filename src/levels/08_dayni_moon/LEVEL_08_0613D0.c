/* LEVEL_08:0x0613D0 -- placement copy of LEVEL_03_05A528.c: resets the shared controller from the argument, then starts the three channel fades at full strength and flags the block as active. */
typedef struct Block {
    char pad00[4];
    unsigned char active;
    char pad05[0x14 - 5];
    float f14;
    float f18;
    float f1C;
} Block;

extern char D_002843D0[];
extern Block D_002881A8[];

extern void func_051010(char *a, int b);
extern void func_040F08(char *a0);
extern void func_0038E8(float *vec, void *a1, void *a2, float f);
extern void func_003718(int a0, int a1, float f12, float f13);
extern void func_003748(int a0, int a1, float f12, float f13);
extern void func_003868(int a0, int a1, float f12, float f13);

void func_0613D0(int arg)
{
    Block *b;

    func_051010(D_002843D0, arg);
    func_040F08(D_002843D0);
    b = D_002881A8;
    func_0038E8((float *)b, 0, (void *)3, 1.0f);
    b = (Block *)((char *)b - 8);
    func_003718(0, 3, b->f14, 1.0f);
    func_003748(0, 3, b->f18, 1.0f);
    func_003868(0, 3, b->f1C, 1.0f);
    b->active = 1;
}
