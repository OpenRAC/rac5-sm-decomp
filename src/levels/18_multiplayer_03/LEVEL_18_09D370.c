/* LEVEL_18:0x09D370 -- placement copy of LEVEL_16_09E360.c: runs the sequence of subsystem initialisers for a level, clearing two globals and registering the first two tables on the way. */

struct Sys09E360 {
    char pad00[0x1C6C];
    int w1C6C;
};

extern struct Sys09E360 *D_001A2F34;
extern unsigned char D_001AB234;
extern int D_001AB230;
extern char D_0026BC30[];
extern char D_0026BD38[];

extern void func_09D330(void);
extern void func_096D38(void);
extern void func_0C5460(int a, int b);
extern void func_0C61D0(int a, int b);
extern void func_0940F0(void);
extern void func_0A32F8(void *a);
extern void func_0A0EE0(void);
extern int func_094A78(int h, void *a);
extern int func_0948E0(void);
extern int func_094928(int h);
extern void func_094940(void);
extern void func_0B83E0(void);
extern void func_0A4ED0(void);
extern void func_09FB60(void);
extern void func_09FFC8(void);
extern void func_0A39E0(void);
extern void func_0A2CB8(void);
extern void func_0C4DB8(void);
extern void func_0C5D30(void);
extern void func_0A02A0(void);
extern void func_0A0B10(void);
extern void func_0A4728(void);
extern void func_09EE70(void);
extern void func_0A3CE8(void);
extern void func_1247F0(void);
extern void func_11CA10(void);
extern void func_0C97B0(void);
extern void func_10D3B8(char *p);

void func_09D370(void *arg)
{
    func_09D330();
    func_096D38();
    func_0C5460(0xF0, 0x88);
    func_0C61D0(0xF0, 0x88);
    func_0940F0();
    D_001AB230 = 0;
    D_001AB234 = 0;
    func_0A32F8(0);
    func_0A0EE0();
    func_094A78(D_001A2F34->w1C6C, arg);
    func_0948E0();
    if (func_094928(D_001A2F34->w1C6C) == 0) {
        func_094940();
    }
    func_0B83E0();
    func_0A4ED0();
    func_09FB60();
    func_09FFC8();
    func_0A39E0();
    func_0A2CB8();
    func_0C4DB8();
    func_0C5D30();
    func_0A02A0();
    func_0A0B10();
    func_0A4728();
    func_09EE70();
    func_0A3CE8();
    func_1247F0();
    func_11CA10();
    func_0C97B0();
    func_10D3B8(D_0026BC30);
    func_10D3B8(D_0026BD38);
}
