/* LEVEL_20:0x088A58 -- placement copy of LEVEL_16_09E360.c: runs the sequence of subsystem initialisers for a level, clearing two globals and registering the first two tables on the way. */

struct Sys09E360 {
    char pad00[0x1C6C];
    int w1C6C;
};

extern struct Sys09E360 *D_00104194;
extern unsigned char D_0010C494;
extern int D_0010C490;
extern char D_0018F0F0[];
extern char D_0018F1F8[];

extern void func_088A18(void);
extern void func_082420(void);
extern void func_0B09B8(int a, int b);
extern void func_0B1728(int a, int b);
extern void func_07F7D8(void);
extern void func_08E978(void *a);
extern void func_08C5C8(void);
extern int func_080160(int h, void *a);
extern int func_07FFC8(void);
extern int func_080010(int h);
extern void func_080028(void);
extern void func_0A3938(void);
extern void func_0904D8(void);
extern void func_08B248(void);
extern void func_08B6B0(void);
extern void func_08F060(void);
extern void func_08E338(void);
extern void func_0B0310(void);
extern void func_0B1288(void);
extern void func_08B988(void);
extern void func_08C1F8(void);
extern void func_08FD30(void);
extern void func_08A558(void);
extern void func_08F2F0(void);
extern void func_0F7800(void);
extern void func_0EFD18(void);
extern void func_0B4D08(void);
extern void func_0E14F0(char *p);

void func_088A58(void *arg)
{
    func_088A18();
    func_082420();
    func_0B09B8(0xF0, 0x88);
    func_0B1728(0xF0, 0x88);
    func_07F7D8();
    D_0010C490 = 0;
    D_0010C494 = 0;
    func_08E978(0);
    func_08C5C8();
    func_080160(D_00104194->w1C6C, arg);
    func_07FFC8();
    if (func_080010(D_00104194->w1C6C) == 0) {
        func_080028();
    }
    func_0A3938();
    func_0904D8();
    func_08B248();
    func_08B6B0();
    func_08F060();
    func_08E338();
    func_0B0310();
    func_0B1288();
    func_08B988();
    func_08C1F8();
    func_08FD30();
    func_08A558();
    func_08F2F0();
    func_0F7800();
    func_0EFD18();
    func_0B4D08();
    func_0E14F0(D_0018F0F0);
    func_0E14F0(D_0018F1F8);
}
