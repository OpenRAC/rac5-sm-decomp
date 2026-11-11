/* LEVEL_07:0x0C3840 -- placement copy of LEVEL_01_0C17E0.c: handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_0021315C;
extern int D_00213158;
extern int D_00213174;
extern int D_00213170;
extern int D_00213160;
extern int D_00213164;
extern int D_00210D08;
extern unsigned char D_0021316C;
extern int D_002131C8[][4];
extern char D_00213178[];
extern char D_002131A0[];
extern unsigned int func_08A0F0(int a);
extern int func_0B8080(int a);
extern void func_01AEE8(int a, int b);
extern int func_0BEAE0(int a);
extern void func_0CD3A0(int a);
extern int func_025490(int s, int a);
extern int func_0254B8(int s, int a);
extern int func_024B90(int s, int a);
extern void func_0C3780(void);
extern void func_0B4A80(char *p);
extern void func_0C4138(int a);

void func_0C3840(void)
{
    unsigned int pad;
    int sel;
    pad = func_08A0F0(0x6B10);
    sel = D_002131C8[D_0021315C][D_00213158];
    if (pad & 0x8) {
        func_0B8080(0);
        func_0B8080(7);
        func_01AEE8(4, 0);
    } else if (pad & 0x1000) {
        func_0B8080(0);
        func_0B8080(6);
        func_0BEAE0(3);
    } else if (pad & 0x2000) {
        func_0CD3A0(5);
        func_0BEAE0(10);
    } else if (pad & 0x8000) {
        if (sel && func_025490(sel, -1) && !func_0254B8(sel, -1)) {
            D_0021316C ^= 1;
            func_0B8080(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_025490(sel, -1) && !func_0254B8(sel, -1)) {
            if (func_024B90(sel, -1)) {
                func_0B8080(0xC);
            } else {
                D_00210D08 = sel;
                D_00213160 = D_00213158;
                D_00213164 = D_0021315C;
                func_0B8080(1);
            }
        }
    } else if (!D_0021316C) {
        if (pad & 0x10) {
            func_0B8080(8);
            D_0021315C--;
            if (D_0021315C < 0) D_0021315C = D_00213174;
            func_0C3780();
        } else if (pad & 0x40) {
            func_0B8080(8);
            D_0021315C++;
            if (D_00213174 < D_0021315C) D_0021315C = 0;
            func_0C3780();
        } else if (pad & 0x80) {
            func_0B8080(8);
            D_00213158--;
            if (D_00213158 < 0) D_00213158 = D_00213170;
            func_0C3780();
        } else if (pad & 0x20) {
            func_0B8080(8);
            D_00213158++;
            if (D_00213170 < D_00213158) D_00213158 = 0;
            func_0C3780();
        }
    }
    func_0B4A80(D_00213178);
    func_0B4A80(D_002131A0);
    func_0C4138(0);
}
