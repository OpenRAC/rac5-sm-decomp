/* LEVEL_07:0x0D2E30 -- placement copy of LEVEL_01_0D0DD0.c: runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_02A3F0(void);
void func_0B9188(void *p);
void func_0B8EC8(void);
int func_1362A0(void *p);
void func_0B8080(int v);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_002082AC;
extern unsigned char D_00217799;
extern void *D_0022F4F0;

void func_0D2E30(void)
{
    func_02A3F0();
    func_0B9188(D_002082AC->p1C68);
    func_0B8EC8();
    if (D_00217799 != 0) {
        func_1362A0(D_0022F4F0);
    }
    func_0B8080(7);
}
