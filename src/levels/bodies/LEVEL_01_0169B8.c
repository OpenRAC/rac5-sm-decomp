/* LEVEL_01:0x0169B8 -- runs one step of an effect if the counter allows it. */
extern char D_00235140[];
extern unsigned func_00D5A8(void);
extern void func_03BE20(char *p);
extern int func_04BEE8(void);
extern int func_06AB80(char *p);
extern void func_06AA40(char *p, int v);
extern void func_003BA0(int v);
extern float func_0013D8(void);
extern void func_003A18(int a, int b, float x, float y);

int func_0169B8(int a, int *cnt, char *p, float f)
{
    if (cnt != 0 && *cnt < 0) {
        return 1;
    }
    if (p == 0) {
        p = D_00235140;
    }
    if (func_00D5A8() < 5) {
        return 0;
    }
    func_03BE20(p);
    if (func_04BEE8() != 0) {
        return 0;
    }
    if (func_06AB80(p) != 0) {
        func_06AA40(p, 0);
    }
    func_003BA0(0);
    func_003A18(a, 1, f, -func_0013D8());
    if (cnt != 0) {
        *cnt = *cnt - 1;
    }
    return 0;
}
