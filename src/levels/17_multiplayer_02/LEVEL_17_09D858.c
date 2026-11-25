/* LEVEL_17:0x09D858 -- placement copy of LEVEL_16_09E360.c: runs the sequence of subsystem initialisers for a level, clearing two globals and registering the first two tables on the way. */

struct Sys09E360 {
    char pad00[0x1C6C];
    int w1C6C;
};

extern struct Sys09E360 *D_001950B4;
extern unsigned char D_0019D3B4;
extern int D_0019D3B0;
extern char D_0025CBB0[];
extern char D_0025CCB8[];

extern void func_09D818(void);
extern void func_097220(void);
extern void func_0C59C8(int a, int b);
extern void func_0C6738(int a, int b);
extern void func_0945D8(void);
extern void func_0A37E0(void *a);
extern void func_0A13C8(void);
extern int func_094F60(int h, void *a);
extern int func_094DC8(void);
extern int func_094E10(int h);
extern void func_094E28(void);
extern void func_0B8948(void);
extern void func_0A5438(void);
extern void func_0A0048(void);
extern void func_0A04B0(void);
extern void func_0A3EC8(void);
extern void func_0A31A0(void);
extern void func_0C5320(void);
extern void func_0C6298(void);
extern void func_0A0788(void);
extern void func_0A0FF8(void);
extern void func_0A4C10(void);
extern void func_09F358(void);
extern void func_0A41D0(void);
extern void func_125160(void);
extern void func_11D3A0(void);
extern void func_0C9D18(void);
extern void func_10DC80(char *p);

void func_09D858(void *arg)
{
    func_09D818();
    func_097220();
    func_0C59C8(0xF0, 0x88);
    func_0C6738(0xF0, 0x88);
    func_0945D8();
    D_0019D3B0 = 0;
    D_0019D3B4 = 0;
    func_0A37E0(0);
    func_0A13C8();
    func_094F60(D_001950B4->w1C6C, arg);
    func_094DC8();
    if (func_094E10(D_001950B4->w1C6C) == 0) {
        func_094E28();
    }
    func_0B8948();
    func_0A5438();
    func_0A0048();
    func_0A04B0();
    func_0A3EC8();
    func_0A31A0();
    func_0C5320();
    func_0C6298();
    func_0A0788();
    func_0A0FF8();
    func_0A4C10();
    func_09F358();
    func_0A41D0();
    func_125160();
    func_11D3A0();
    func_0C9D18();
    func_10DC80(D_0025CBB0);
    func_10DC80(D_0025CCB8);
}
