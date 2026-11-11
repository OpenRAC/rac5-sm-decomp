/* LEVEL_07:0x0D9990 -- placement copy of LEVEL_01_0D7930.c: draws the selected entry's overlay and its offset marker. */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_0021AA2C;
extern int D_0021AA4C;
extern Ent D_0021AA50[];
extern int D_0021AA34;
extern unsigned short D_0021AA28;
extern int D_0021AA40;
extern int D_00342A60;
extern int D_00342A78;
extern void func_0CC078(int);
extern void func_0A8280(int *);
extern void func_0AAE80(int, int);
extern void func_0B0938(int, int, int, int, unsigned int, float);
extern void func_0AACA0(unsigned int);
extern void func_0AD500(int *);
extern void func_0B0708(int, L *, float);
extern int func_0AA680(L *);
extern void func_0ACA48(int, int, int, float, float);
void func_0D9990(void)
{
    L l;
    float z;
    if (D_0021AA2C) {
        func_0CC078(0x14);
        z = 0.0f;
        func_0A8280(&D_00342A60);
        func_0AAE80(2, 0);
        func_0B0938(D_0021AA50[D_0021AA4C].a, 0xEF, 0x87, D_0021AA50[D_0021AA4C].b, 0xFFFFFFFF, z);
        func_0AACA0(0xFFFFFFFF);
        func_0AD500(&D_00342A78);
        if (!D_0021AA34) {
            func_0B0708(D_0021AA50[D_0021AA4C].e, &l, z);
            func_0ACA48((short)func_0AA680(&l), (short)(l.h + D_0021AA28), D_0021AA40, 0.9f, 0.9f);
        }
    }
}
