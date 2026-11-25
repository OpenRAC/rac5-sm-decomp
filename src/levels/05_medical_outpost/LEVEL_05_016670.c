/* LEVEL_05:0x016670 -- placement copy of LEVEL_01_0169B8.c: runs one step of an effect if the counter allows it. */
extern char D_00220E40[];
extern unsigned func_00D5A8(void);
extern void func_039A00(char *p);
extern int func_049B18(void);
extern int func_0687E8(char *p);
extern void func_0686A8(char *p, int v);
extern void func_003BA0(int v);
extern float func_0013D8(void);
extern void func_003A18(void *a, int b, float x, float y);

int func_016670(void *a, int *cnt, char *p, float f)
{
    if (cnt != 0 && *cnt < 0) {
        return 1;
    }
    if (p == 0) {
        p = D_00220E40;
    }
    if (func_00D5A8() < 5) {
        return 0;
    }
    func_039A00(p);
    if (func_049B18() != 0) {
        return 0;
    }
    if (func_0687E8(p) != 0) {
        func_0686A8(p, 0);
    }
    func_003BA0(0);
    func_003A18(a, 1, f, -func_0013D8());
    if (cnt != 0) {
        *cnt = *cnt - 1;
    }
    return 0;
}
