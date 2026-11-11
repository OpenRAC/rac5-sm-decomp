/* FRONTEND:0x001E10 -- runs two status helpers and, depending on their results, calls one or two table routines before a final helper. */

extern void func_004EC8(void);
extern int func_005650(int a0);
extern int func_001B20(int a0);
extern void func_001AE0(int a0, int a1);
extern void func_000190(void);

void func_001E10(void)
{
    func_004EC8();
    if ((func_005650(1) & 8) != 0) {
        if (func_001B20(10) != 0) {
            func_001AE0(4, 0);
            return;
        }
        if (func_001B20(4) != 0) {
            func_001AE0(10, 0);
        }
    }
    func_000190();
}
