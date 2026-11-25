/* LEVEL_19:0x09DBF0 -- placement copy of LEVEL_16_09E360.c: runs the sequence of subsystem initialisers for a level, clearing two globals and registering the first two tables on the way. */

struct Sys09E360 {
    char pad00[0x1C6C];
    int w1C6C;
};

extern struct Sys09E360 *D_001A2C34;
extern unsigned char D_001AAF34;
extern int D_001AAF30;
extern char D_0026BA30[];
extern char D_0026BB38[];

extern void func_09DBB0(void);
extern void func_0975B8(void);
extern void func_0C5D60(int a, int b);
extern void func_0C6AD0(int a, int b);
extern void func_094970(void);
extern void func_0A3B78(void *a);
extern void func_0A1760(void);
extern int func_0952F8(int h, void *a);
extern int func_095160(void);
extern int func_0951A8(int h);
extern void func_0951C0(void);
extern void func_0B8CE0(void);
extern void func_0A57D0(void);
extern void func_0A03E0(void);
extern void func_0A0848(void);
extern void func_0A4260(void);
extern void func_0A3538(void);
extern void func_0C56B8(void);
extern void func_0C6630(void);
extern void func_0A0B20(void);
extern void func_0A1390(void);
extern void func_0A4FA8(void);
extern void func_09F6F0(void);
extern void func_0A4568(void);
extern void func_1260A0(void);
extern void func_11E2E0(void);
extern void func_0CA0B0(void);
extern void func_10EDA8(char *p);

void func_09DBF0(void *arg)
{
    func_09DBB0();
    func_0975B8();
    func_0C5D60(0xF0, 0x88);
    func_0C6AD0(0xF0, 0x88);
    func_094970();
    D_001AAF30 = 0;
    D_001AAF34 = 0;
    func_0A3B78(0);
    func_0A1760();
    func_0952F8(D_001A2C34->w1C6C, arg);
    func_095160();
    if (func_0951A8(D_001A2C34->w1C6C) == 0) {
        func_0951C0();
    }
    func_0B8CE0();
    func_0A57D0();
    func_0A03E0();
    func_0A0848();
    func_0A4260();
    func_0A3538();
    func_0C56B8();
    func_0C6630();
    func_0A0B20();
    func_0A1390();
    func_0A4FA8();
    func_09F6F0();
    func_0A4568();
    func_1260A0();
    func_11E2E0();
    func_0CA0B0();
    func_10EDA8(D_0026BA30);
    func_10EDA8(D_0026BB38);
}
