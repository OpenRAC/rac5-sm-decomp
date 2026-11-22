/* FRONTEND:0x01B660 -- menu input step: flushes a pending value into the shared record, clears the pad edge, then maps the pressed buttons to menu actions (confirm, back, scroll with the selected entry) or refreshes the menu with the pressed buttons when none matched. */
typedef struct Entry {
    char pad_00[0xD0];
    int id_D0;
} Entry;

extern int D_00031D38;
extern char D_00197600[];
extern char D_00108E40[];
extern int func_00B990(char *buf, int v, char *a, char *b, char *c);
extern void func_00B8F0(unsigned int mask);
extern Entry *func_0129E8(char *menu);
extern unsigned int func_0056E8(int pad);
extern int func_0145C8(int a);
extern void func_001AE0(int a, int b);
extern int func_001B40(int id, int a);
extern int func_012180(char *menu, int buttons);

void func_01B660(void)
{
    char buf[256];
    Entry *e;
    unsigned int m;

    if (D_00031D38 != 0) {
        func_00B990(buf, D_00031D38, D_00108E40, D_00108E40, D_00108E40);
        D_00031D38 = 0;
    }
    func_00B8F0(0xFFFFFFFF);
    e = func_0129E8(D_00197600);
    m = func_0056E8(1);
    if ((m & 8) != 0) {
        func_0145C8(0);
        func_001AE0(4, 0);
    } else if ((m & 0x1000) != 0) {
        func_0145C8(0);
        func_0145C8(7);
        func_001AE0(0xB, 0);
    } else if ((m & 0x4000) != 0) {
        if (e != 0) {
            func_0145C8(1);
            func_001B40(e->id_D0, 1);
        }
    } else {
        func_012180(D_00197600, m);
    }
}
