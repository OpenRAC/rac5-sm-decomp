/* LEVEL_08:0x065398 -- the level's "activate" routine: three calls on the
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

extern Rec D_002843D0;
extern Other D_00288208;

extern int func_067A58(void);
extern void func_067070(Rec *a0, unsigned char a1, int a2);
extern void func_052B78(Rec *a0, int a1, int a2, int a3, float a4, float a5);

void func_func_065398(void)
{
    Rec *s0 = &D_002843D0;

    if (func_067A58() != 0) {
        func_067070(s0, s0->b108, 5);
        func_052B78(s0, 5, 0, 1, 0.125f, 0.0f);
        D_00288208.f160 = 160.00319f;
        D_00288208.f15c = 160.00319f;
        D_00288208.b1b6 = 5;
    }
}
