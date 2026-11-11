/* LEVEL_16:0x018C18 -- optionally stores a global into a context record, then dispatches on a small code range and returns 1. */

extern int func_0193E8(void);
extern int func_0193F8(void);
extern void func_024F20(int a, int b, int c);
extern void func_019420(void);
extern void func_018B98(int a, int b);
extern unsigned char D_001D04A0[];
extern unsigned char D_001A1AB4[];

int func_018C18(int a0, int a1)
{
    unsigned int r;
    unsigned int v;
    if (a1 != 0) {
        v = *(unsigned int *)D_001D04A0;
        *(unsigned int *)(*(unsigned char **)D_001A1AB4 + 0x1C64) = v;
    }
    if ((unsigned int)(a0 - 1) < 0xA) {
        if (func_0193E8() != 0) {
            r = (unsigned int)func_0193F8();
            func_024F20(0x90, r & 0xFF, 0xFF);
            func_019420();
        }
    }
    func_018B98(7, a0);
    return 1;
}
