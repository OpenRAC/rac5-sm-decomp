/* LEVEL_16.REL:0x09E360: reviewed 324-byte candidate, held for ABI review.
 * Runs the sequence of subsystem initialisers for a level, clearing two
 * globals and registering the first two tables on the way.
 * pinned C with gnu-ee-trial links 324/324 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_0A4300 returning void with (int), but the accepted
 * LEVEL_16_0A4300.c defines it returning void with (pointer).
 * It declares func_0958D0 returning int with no arguments, but the accepted
 * LEVEL_16_0958D0.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Sys09E360 {
    char pad00[0x1C6C];
    int w1C6C;
};

extern struct Sys09E360 *D_001A1AB4;
extern unsigned char D_001A9DB4;
extern int D_001A9DB0;
extern char D_0026B8B0[];
extern char D_0026B9B8[];

extern void func_09E320(void);
extern void func_097D28(void);
extern void func_0C6488(int a, int b);
extern void func_0C71F8(int a, int b);
extern void func_0950E0(void);
extern void func_0A4300(int a);
extern void func_0A1ED0(void);
extern void func_095A68(int h, int a);
extern int func_0958D0(void);
extern int func_095918(int h);
extern void func_095930(void);
extern void func_0B9408(void);
extern void func_0A5F58(void);
extern void func_0A0B50(void);
extern void func_0A0FB8(void);
extern void func_0A49E8(void);
extern void func_0A3CC0(void);
extern void func_0C5DE0(void);
extern void func_0C6D58(void);
extern void func_0A1290(void);
extern void func_0A1B00(void);
extern void func_0A5730(void);
extern void func_09FE60(void);
extern void func_0A4CF0(void);
extern void func_125738(void);
extern void func_11D970(void);
extern void func_0CA7D8(void);
extern void func_10E708(char *p);

void func_09E360(int arg)
{
    func_09E320();
    func_097D28();
    func_0C6488(0xF0, 0x88);
    func_0C71F8(0xF0, 0x88);
    func_0950E0();
    D_001A9DB0 = 0;
    D_001A9DB4 = 0;
    func_0A4300(0);
    func_0A1ED0();
    func_095A68(D_001A1AB4->w1C6C, arg);
    func_0958D0();
    if (func_095918(D_001A1AB4->w1C6C) == 0) {
        func_095930();
    }
    func_0B9408();
    func_0A5F58();
    func_0A0B50();
    func_0A0FB8();
    func_0A49E8();
    func_0A3CC0();
    func_0C5DE0();
    func_0C6D58();
    func_0A1290();
    func_0A1B00();
    func_0A5730();
    func_09FE60();
    func_0A4CF0();
    func_125738();
    func_11D970();
    func_0CA7D8();
    func_10E708(D_0026B8B0);
    func_10E708(D_0026B9B8);
}
