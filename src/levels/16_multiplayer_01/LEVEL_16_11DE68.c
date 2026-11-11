/* LEVEL_16:0x11DE68 -- returns early on two status checks, otherwise runs a short setup sequence. */

extern int func_025060(int a, int b);
extern int func_112C80(void);
extern int func_0A50B0(int index);
extern char *func_10F330(int id);
extern void func_0C6648(int a, char *b, int c, int d);
extern void func_0C6680(int a);
extern void func_025030(int a, int b, int c);

void func_11DE68(void)
{
    char *s;

    if (func_025060(0, 0xFF) != 0) {
        return;
    }
    if (func_112C80() == 0) {
        return;
    }
    func_0A50B0(1);
    s = func_10F330(0x6C5);
    func_0C6648(0, s, 0, 0);
    func_0C6680(0x5A);
    func_025030(0, 1, 0xFF);
}
