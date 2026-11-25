/* LEVEL_09:0x0164F0 -- placement copy of LEVEL_05_016670.c: placement copy of LEVEL_01_0169B8.c: runs one step of an effect if the counter allows it. */
extern char D_0021C8C0[];
extern unsigned func_00D5A8(void);
extern void func_0382E0(char *p);
extern int func_0483C8(void);
extern int func_067780(char *p);
extern void func_067640(char *p, int v);
extern void func_003BA0(int v);
extern float func_0013D8(void);
extern void func_003A18(void *a, int b, float x, float y);

int func_0164F0(void *a, int *cnt, char *p, float f)
{
    if (cnt != 0 && *cnt < 0) {
        return 1;
    }
    if (p == 0) {
        p = D_0021C8C0;
    }
    if (func_00D5A8() < 5) {
        return 0;
    }
    func_0382E0(p);
    if (func_0483C8() != 0) {
        return 0;
    }
    if (func_067780(p) != 0) {
        func_067640(p, 0);
    }
    func_003BA0(0);
    func_003A18(a, 1, f, -func_0013D8());
    if (cnt != 0) {
        *cnt = *cnt - 1;
    }
    return 0;
}
