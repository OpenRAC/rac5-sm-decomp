/* LEVEL_19:0x11E7D0 -- placement copy of LEVEL_16_11DE68.c: returns early on two status checks, otherwise runs a short setup sequence. */

extern int func_024C08(int a, int b);
extern int func_113428(void);
extern void func_0A4928(int a);
extern char *func_10F9D0(int id);
extern void func_0C5F20(int a, char *b, int c, int d);
extern void func_0C5F58(int a);
extern void func_024BD8(int a, int b, int c);

void func_11E7D0(void)
{
    char *s;

    if (func_024C08(0, 0xFF) != 0) {
        return;
    }
    if (func_113428() == 0) {
        return;
    }
    func_0A4928(1);
    s = func_10F9D0(0x6C5);
    func_0C5F20(0, s, 0, 0);
    func_0C5F58(0x5A);
    func_024BD8(0, 1, 0xFF);
}
