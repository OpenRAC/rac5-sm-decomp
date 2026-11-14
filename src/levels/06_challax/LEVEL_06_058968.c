/* LEVEL_06:0x058968 -- placement copy of LEVEL_03_05A528.c: resets the shared controller from the argument, then starts the three channel fades at full strength and flags the block as active. */
typedef struct Block {
    char pad00[4];
    unsigned char active;
    char pad05[0x14 - 5];
    float f14;
    float f18;
    float f1C;
} Block;

extern char D_00221EC0[];
extern Block D_00225C98[];

extern void func_048600(char *a, int b);
extern void func_038528(char *a0);
extern void func_0038B8(float *vec, void *a1, void *a2, float f);
extern void func_0036E8(int a0, int a1, float f12, float f13);
extern void func_003718(int a0, int a1, float f12, float f13);
extern void func_003838(int a0, int a1, float f12, float f13);

void func_058968(int arg)
{
    Block *b;

    func_048600(D_00221EC0, arg);
    func_038528(D_00221EC0);
    b = D_00225C98;
    func_0038B8((float *)b, 0, (void *)3, 1.0f);
    b = (Block *)((char *)b - 8);
    func_0036E8(0, 3, b->f14, 1.0f);
    func_003718(0, 3, b->f18, 1.0f);
    func_003838(0, 3, b->f1C, 1.0f);
    b->active = 1;
}
