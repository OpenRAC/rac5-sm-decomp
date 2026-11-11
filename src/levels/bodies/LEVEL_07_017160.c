/* LEVEL_07:0x017160 -- placement copy of LEVEL_01_0169B8.c: runs one step of an effect if the counter allows it. */
extern char D_0024AA40[];
extern unsigned func_00D5A8(void);
extern void func_03C3B0(char *p);
extern int func_04C4B8(void);
extern int func_06B888(char *p);
extern void func_06B748(char *p, int v);
extern void func_003BA0(int v);
extern float func_0013D8(void);
extern void func_003A18(int a, int b, float x, float y);

int func_017160(int a, int *cnt, char *p, float f)
{
    if (cnt != 0 && *cnt < 0) {
        return 1;
    }
    if (p == 0) {
        p = D_0024AA40;
    }
    if (func_00D5A8() < 5) {
        return 0;
    }
    func_03C3B0(p);
    if (func_04C4B8() != 0) {
        return 0;
    }
    if (func_06B888(p) != 0) {
        func_06B748(p, 0);
    }
    func_003BA0(0);
    func_003A18(a, 1, f, -func_0013D8());
    if (cnt != 0) {
        *cnt = *cnt - 1;
    }
    return 0;
}
