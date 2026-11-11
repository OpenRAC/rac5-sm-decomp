/* LEVEL_08:0x0173C8 -- placement copy of LEVEL_01_0169B8.c: runs one step of an effect if the counter allows it. */
extern char D_002843D0[];
extern unsigned func_00D610(void);
extern void func_040F08(char *p);
extern int func_050FF0(void);
extern int func_0703C8(char *p);
extern void func_070288(char *p, int v);
extern void func_003C08(int v);
extern float func_0013D8(void);
extern void func_003A58(int a, int b, float x, float y);

int func_0173C8(int a, int *cnt, char *p, float f)
{
    if (cnt != 0 && *cnt < 0) {
        return 1;
    }
    if (p == 0) {
        p = D_002843D0;
    }
    if (func_00D610() < 5) {
        return 0;
    }
    func_040F08(p);
    if (func_050FF0() != 0) {
        return 0;
    }
    if (func_0703C8(p) != 0) {
        func_070288(p, 0);
    }
    func_003C08(0);
    func_003A58(a, 1, f, -func_0013D8());
    if (cnt != 0) {
        *cnt = *cnt - 1;
    }
    return 0;
}
