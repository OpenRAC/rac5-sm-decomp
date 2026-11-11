/* LEVEL_07:0x0D7DA0 -- placement copy of LEVEL_01_0D5D40.c: handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
typedef struct Entry {
    char pad_00[0xCC];
    unsigned char enabled;
    char pad_CD[3];
    int id;
} Entry;

typedef struct Menu {
    Entry **items;
    int w4;
    int sel;
    char pad_0C[0x10];
    int result;
} Menu;

typedef struct Game {
    int w0;
    int w4;
    unsigned int flags;
} Game;

extern Menu D_002194C0;
extern Game *D_002082AC;
extern char D_002191F4;
extern char D_002191F5;
extern char D_00210D30[];

extern unsigned int func_08A0F0(int arg);
extern int func_0D8AC8(void);
extern void func_0D7CF8(unsigned int pad);
extern int func_0BB708(Menu *menu, unsigned int pad);
extern int func_0B8080(int id);
extern void func_0D7CA0(int id);
extern int func_0BDD90(void);
extern void func_0CB528(int value);
extern int func_0BEAE0(int id);
extern void func_01AEE8(int a, int b);
extern int func_0B4B18(char *obj);

void func_0D7DA0(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_08A0F0(0x6B10);
    if (func_0D8AC8() != 0) {
        func_0D7CF8(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_0B8080(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_002194C0.items[D_002194C0.sel]->enabled == 0) {
        goto done;
    }
    func_0B8080(1);
    if (D_002194C0.items[D_002194C0.sel]->id != 0) {
        goto choose;
    }
leave:
    func_0B8080(7);
    func_01AEE8(4, 0);
    goto done;
choose:
    func_0B8080(6);
    entry = D_002194C0.items[D_002194C0.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_002191F4 = 1;
            D_002191F5 = 0;
            func_0D7CA0(0x2A7);
        } else if (id == 0x66) {
            D_002191F4 = 0;
            D_002191F5 = 1;
            func_0D7CA0(0x2A8);
        } else if (id == 100) {
            D_002191F4 = 0;
            D_002191F5 = 0;
            D_002082AC->flags = D_002082AC->flags ^ 1;
        } else if (id == 6) {
            func_0CB528(func_0BDD90());
            func_0BEAE0(6);
        }
    }
    goto done;
passthrough:
    func_0BB708(&D_002194C0, pad);
done:
    D_002194C0.result = func_0B4B18(D_00210D30);
}
