/* LEVEL_22:0x055488 -- the level's "activate" routine: three calls on the
   level record, then the level's camera record is reset. */
typedef struct {
    char pad[0x108];
    unsigned char b108;
} Rec;

typedef struct {
    char pad[0x15C];
    float f15c;
    float f160;
    char pad2[0x52];
    unsigned char b1b6;
} Other;

extern Rec D_00186D40;
extern Other D_0018AB78;

extern int func_057DD8(void);
extern void func_0573D0(Rec *a0, unsigned char a1, int a2);
extern void func_043310(Rec *a0, int a1, int a2, int a3, float a4, float a5);

void func_func_055488(void)
{
    Rec *s0 = &D_00186D40;

    if (func_057DD8() != 0) {
        func_0573D0(s0, s0->b108, 5);
        func_043310(s0, 0x3E, 0, 1, 0.125f, 0.0f);
        D_0018AB78.f160 = 160.00319f;
        D_0018AB78.f15c = 160.00319f;
        D_0018AB78.b1b6 = 4;
    }
}
