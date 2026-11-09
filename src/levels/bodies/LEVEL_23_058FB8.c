/* LEVEL_23:0x058FB8 -- placement copy of LEVEL_22_055488.c: the level's "activate" routine: three calls on the
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

extern Rec D_002025C0;
extern Other D_002063F8;

extern int func_05B988(void);
extern void func_05AF80(Rec *a0, unsigned char a1, int a2);
extern void func_046DF0(Rec *a0, int a1, int a2, int a3, float a4, float a5);

void func_func_055488(void)
{
    Rec *s0 = &D_002025C0;

    if (func_05B988() != 0) {
        func_05AF80(s0, s0->b108, 5);
        func_046DF0(s0, 0x3E, 0, 1, 0.125f, 0.0f);
        D_002063F8.f160 = 160.00319f;
        D_002063F8.f15c = 160.00319f;
        D_002063F8.b1b6 = 4;
    }
}
