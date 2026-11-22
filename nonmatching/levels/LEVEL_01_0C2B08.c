/* USA LEVEL_01.REL:0x0C2B08, 368-byte candidate (21 November 2026).
 * Measured pinned: 7 differing words; first difference at 0x74.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    short x;
    short y;
    short w;
    short h;
} Rect;

typedef struct {
    char pad00[0x10];
    short h10;
    short h12;
    char pad14[0x20 - 0x14];
    unsigned int w20;
    char pad24[0x39 - 0x24];
    unsigned char b39;
} Panel;

extern unsigned char D_001FF000;
extern int D_001FEF90;
extern int D_001FEF94;
extern int D_001FEF80;
extern int D_001FEF88;
extern int D_001FEF8C;
extern int D_001FEFF8;
extern int D_001FEF68;
extern int D_001FEF6C;
extern int D_001FEF74;
extern int D_001FEF78;
extern int D_001FEF7C;
extern int D_0032917C;
extern Panel D_00329128;

extern int SND_PauseAndSyncATRAC__Fi(int a);
extern void func_01A828(int a, int b);
extern int func_0A63E0(int a);
extern int func_0AE708(int id, Rect *r, float f);
extern int func_0A8680(Rect *r);
extern int func_0A86B0(Rect *r);
extern int func_0A86E0(Rect *r);
extern int func_0A8798(Rect *r);
extern void func_0AB3E0(Panel *p, short a, short b, short c, short d, unsigned int e);
extern void func_0C3530(void);

void func_0C2B08(void)
{
    Rect r;
    int v;

    if (SND_PauseAndSyncATRAC__Fi(-1) == 0) {
        D_001FF000 = 1;
        func_01A828(4, 0);
        return;
    }
    D_001FEF90 = func_0A63E0(0);
    v = func_0A63E0(1);
    D_001FEF94 = v;
    D_001FEF68 = -1;
    D_001FEF6C = 1;
    D_001FEF88 = v;
    D_0032917C = 0;
    D_001FEF80 = -1;
    D_001FEF8C = 0x20800;
    D_001FEF74 = 0;
    D_001FEF78 = 0;
    D_001FEF7C = 0;
    D_001FEFF8 = 1;
    func_0AE708(0x1EE, &r, 0.0f);
    func_0AB3E0(&D_00329128, (short)func_0A8680(&r), (short)func_0A86B0(&r), (short)func_0A86E0(&r),
                (short)func_0A8798(&r), 0x40602020);
    D_00329128.h10 = 0;
    D_00329128.h12 = 0;
    D_00329128.w20 |= 0x840;
    D_00329128.b39 = 0;
    func_0C3530();
}
