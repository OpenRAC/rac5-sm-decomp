/* LEVEL_09:0x05C770 -- the level's "activate" routine: three calls on the
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

extern Rec D_0021C8C0;
extern Other D_002206F8;

extern int func_05EE30(void);
extern void func_05E448(Rec *a0, unsigned char a1, int a2);
extern void func_049F50(Rec *a0, int a1, int a2, int a3, float a4, float a5);

void func_func_05C770(void)
{
    Rec *s0 = &D_0021C8C0;

    if (func_05EE30() != 0) {
        func_05E448(s0, s0->b108, 5);
        func_049F50(s0, 5, 0, 1, 0.125f, 0.0f);
        D_002206F8.f160 = 160.00319f;
        D_002206F8.f15c = 160.00319f;
        D_002206F8.b1b6 = 5;
    }
}
