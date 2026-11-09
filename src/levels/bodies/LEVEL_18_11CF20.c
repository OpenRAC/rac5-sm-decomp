/* LEVEL_18:0x11CF20 -- placement copy of LEVEL_16_11DE68.c: returns early on two status checks, otherwise runs a short setup sequence. */

extern int func_024610(int a, int b);
extern int func_111A38(void);
extern void func_0A40A8(int a);
extern char *func_10DFE0(int id);
extern void func_0C5620(int a, char *b, int c, int d);
extern void func_0C5658(int a);
extern void func_0245E0(int a, int b, int c);

void func_11CF20(void)
{
    char *s;

    if (func_024610(0, 0xFF) != 0) {
        return;
    }
    if (func_111A38() == 0) {
        return;
    }
    func_0A40A8(1);
    s = func_10DFE0(0x6C5);
    func_0C5620(0, s, 0, 0);
    func_0C5658(0x5A);
    func_0245E0(0, 1, 0xFF);
}
