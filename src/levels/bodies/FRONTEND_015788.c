/* FRONTEND:0x015788 -- draws the selected entry's overlay when the display flag is set. */
typedef struct {
    int a;
    int b;
    char pad8[0x10];
} Ent;
typedef struct {
    char pad0[0xC];
    unsigned short s;
    char pad0E[2];
} Loc;
extern int D_00030364;
extern int D_0003036C;
extern int D_00030384;
extern Ent D_00030388[];
extern unsigned short D_00030360;
extern int D_00030378;
extern char D_00196FE0[];
extern char D_00196FF8[];
extern void func_00ADF0(char *p);
extern void func_00BAD0(int a, int b);
extern void func_0101D8(int a, int b, int c, int d, unsigned e, float f);
extern void func_00B8F0(unsigned v);
extern void func_00DD40(char *p);
extern void func_010018(int a, Loc *l, float f);
extern int func_00B5E0(Loc *l);
extern void func_00D298(short a, short b, int c, float f, float g);

void func_015788(void)
{
    Loc loc;
    int v;

    if (D_00030364 != 0) {
        func_00ADF0(D_00196FE0);
        func_00BAD0(2, 0);
        func_0101D8(D_00030388[D_00030384].a, 0xEF, 0x87, D_00030388[D_00030384].b, 0xFFFFFFFF, 0.0f);
        func_00B8F0(0xFFFFFFFF);
        func_00DD40(D_00196FF8);
        if (D_0003036C == 0) {
            func_010018(*(int *)((char *)&D_00030388[D_00030384] + 0x10), &loc, 0.0f);
            v = func_00B5E0(&loc);
            func_00D298(v, loc.s + D_00030360, D_00030378, 0.9f, 0.9f);
        }
    }
}
