/* LEVEL_10:0x0D7180 -- placement copy of LEVEL_01_0D5D40.c: handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
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

extern Menu D_0020E1C0;
extern Game *D_001FCFAC;
extern char D_0020DEF4;
extern char D_0020DEF5;
extern char D_00205A30[];

extern unsigned int func_088388(int arg);
extern int func_0D7EA8(void);
extern void func_0D70D8(unsigned int pad);
extern int func_0BA9F0(Menu *menu, unsigned int pad);
extern int func_0B71F8(int id);
extern void func_0D7080(int id);
extern int func_0BD078(void);
extern void func_0CA908(int value);
extern int func_0BDDD0(int id);
extern void func_019EA8(int a, int b);
extern int func_0B3C90(char *obj);

void func_0D7180(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_088388(0x6B10);
    if (func_0D7EA8() != 0) {
        func_0D70D8(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_0B71F8(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_0020E1C0.items[D_0020E1C0.sel]->enabled == 0) {
        goto done;
    }
    func_0B71F8(1);
    if (D_0020E1C0.items[D_0020E1C0.sel]->id != 0) {
        goto choose;
    }
leave:
    func_0B71F8(7);
    func_019EA8(4, 0);
    goto done;
choose:
    func_0B71F8(6);
    entry = D_0020E1C0.items[D_0020E1C0.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_0020DEF4 = 1;
            D_0020DEF5 = 0;
            func_0D7080(0x2A7);
        } else if (id == 0x66) {
            D_0020DEF4 = 0;
            D_0020DEF5 = 1;
            func_0D7080(0x2A8);
        } else if (id == 100) {
            D_0020DEF4 = 0;
            D_0020DEF5 = 0;
            D_001FCFAC->flags = D_001FCFAC->flags ^ 1;
        } else if (id == 6) {
            func_0CA908(func_0BD078());
            func_0BDDD0(6);
        }
    }
    goto done;
passthrough:
    func_0BA9F0(&D_0020E1C0, pad);
done:
    D_0020E1C0.result = func_0B3C90(D_00205A30);
}
