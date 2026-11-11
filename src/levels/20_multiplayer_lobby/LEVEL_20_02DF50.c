/* LEVEL_20:0x02DF50 -- placement copy of LEVEL_16_033B68.c: initializes two tables and stores four created handles. */
extern void func_02DEC0(void *);
extern void func_052320(void);
extern void func_045C58(void);
extern int func_0C87D8(int);
extern int func_0C96F8(int);
extern int func_05D5B0(int, int, int, int, int, int);
extern void func_02DAA0(void);

struct S24E240 {
    char pad0[0x2C];
    int f2C;
    char pad30[0x3C];
    int f6C;
    char pad70[0x24];
    int f94;
    char pad98[0x28];
    int fC0;
};

extern char D_0013BA10[];
extern char D_0013F400[];
extern struct S24E240 D_00171A80;
extern int D_00104804;
extern int D_00104808;
extern int D_0010480C;
extern int D_00104810;

void func_02DF50(void)
{
    func_02DEC0(D_0013BA10);
    func_02DEC0(D_0013F400);
    func_052320();
    func_045C58();
    D_00104808 = func_0C87D8((D_00171A80.f6C << 16) | 0xA00010C1);
    D_0010480C = func_0C87D8((D_00171A80.f2C << 16) | 0xA00010C1);
    D_00104804 = func_0C96F8((D_00171A80.fC0 << 16) | 0xA0001041);
    D_00104810 = func_05D5B0(D_00171A80.f94, 10, 0, 1, 0, 2);
    func_02DAA0();
}
