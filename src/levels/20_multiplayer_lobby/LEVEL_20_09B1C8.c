/* LEVEL_20:0x09B1C8 -- placement copy of LEVEL_01_0C17E0.c: handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_0010F5B4;
extern int D_0010F5B0;
extern int D_0010F5CC;
extern int D_0010F5C8;
extern int D_0010F5B8;
extern int D_0010F5BC;
extern int D_0010D168;
extern unsigned char D_0010F5C4;
extern int D_0010F620[][4];
extern char D_0010F5D0[];
extern char D_0010F5F8[];
extern unsigned int func_067228(int a);
extern int func_08F6B0(int a);
extern void func_016950(int a, int b);
extern int func_096438(int a);
extern void func_0A4F70(int a);
extern int func_01F590(int s, int a);
extern int func_01F5B8(int s, int a);
extern int func_01ED70(int s, int a);
extern void func_09B108(void);
extern void func_08BA80(char *p);
extern void func_09BAC0(int a);

void func_09B1C8(void)
{
    unsigned int pad;
    int sel;
    pad = func_067228(0x6B10);
    sel = D_0010F620[D_0010F5B4][D_0010F5B0];
    if (pad & 0x8) {
        func_08F6B0(0);
        func_08F6B0(7);
        func_016950(4, 0);
    } else if (pad & 0x1000) {
        func_08F6B0(0);
        func_08F6B0(6);
        func_096438(3);
    } else if (pad & 0x2000) {
        func_0A4F70(5);
        func_096438(10);
    } else if (pad & 0x8000) {
        if (sel && func_01F590(sel, -1) && !func_01F5B8(sel, -1)) {
            D_0010F5C4 ^= 1;
            func_08F6B0(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_01F590(sel, -1) && !func_01F5B8(sel, -1)) {
            if (func_01ED70(sel, -1)) {
                func_08F6B0(0xC);
            } else {
                D_0010D168 = sel;
                D_0010F5B8 = D_0010F5B0;
                D_0010F5BC = D_0010F5B4;
                func_08F6B0(1);
            }
        }
    } else if (!D_0010F5C4) {
        if (pad & 0x10) {
            func_08F6B0(8);
            D_0010F5B4--;
            if (D_0010F5B4 < 0) D_0010F5B4 = D_0010F5CC;
            func_09B108();
        } else if (pad & 0x40) {
            func_08F6B0(8);
            D_0010F5B4++;
            if (D_0010F5CC < D_0010F5B4) D_0010F5B4 = 0;
            func_09B108();
        } else if (pad & 0x80) {
            func_08F6B0(8);
            D_0010F5B0--;
            if (D_0010F5B0 < 0) D_0010F5B0 = D_0010F5C8;
            func_09B108();
        } else if (pad & 0x20) {
            func_08F6B0(8);
            D_0010F5B0++;
            if (D_0010F5C8 < D_0010F5B0) D_0010F5B0 = 0;
            func_09B108();
        }
    }
    func_08BA80(D_0010F5D0);
    func_08BA80(D_0010F5F8);
    func_09BAC0(0);
}
