/* LEVEL_20:0x0B1558 -- placement copy of LEVEL_01_0D7930.c: draws the selected entry's overlay and its offset marker. */
typedef struct Ent { int a; int b; int c; int d; int e; int f; } Ent;
typedef struct L { char pad[0xC]; unsigned short h; char pad2[2]; } L;
extern int D_00116CBC;
extern int D_00116CDC;
extern Ent D_00116CE0[];
extern int D_00116CC4;
extern unsigned short D_00116CB8;
extern int D_00116CD0;
extern int D_0019EA20;
extern int D_0019EA38;
extern void func_0A3910(int);
extern void func_07FB10(int *);
extern void func_081C38(int, int);
extern void func_087720(int, int, int, int, unsigned int, float);
extern void func_081A58(unsigned int);
extern void func_0842E8(int *);
extern void func_0874F0(int, L *, float);
extern int func_081408(L *);
extern void func_083830(int, int, int, float, float);
void func_0B1558(void)
{
    L l;
    float z;
    if (D_00116CBC) {
        func_0A3910(0x14);
        z = 0.0f;
        func_07FB10(&D_0019EA20);
        func_081C38(2, 0);
        func_087720(D_00116CE0[D_00116CDC].a, 0xEF, 0x87, D_00116CE0[D_00116CDC].b, 0xFFFFFFFF, z);
        func_081A58(0xFFFFFFFF);
        func_0842E8(&D_0019EA38);
        if (!D_00116CC4) {
            func_0874F0(D_00116CE0[D_00116CDC].e, &l, z);
            func_083830((short)func_081408(&l), (short)(l.h + D_00116CB8), D_00116CD0, 0.9f, 0.9f);
        }
    }
}
