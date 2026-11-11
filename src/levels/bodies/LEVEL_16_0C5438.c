/* LEVEL_16:0x0C5438 -- placement copy of LEVEL_01_0D5D40.c: handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
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

extern Menu D_001B3070;
extern Game *D_001A1AB4;
extern char D_001B2DA4;
extern char D_001B2DA5;
extern char D_001AAAB0[];

extern unsigned int func_0795B8(int arg);
extern int func_0C6160(void);
extern void func_0C5390(unsigned int pad);
extern int func_0A86F8(Menu *menu, unsigned int pad);
extern int func_0A50B0(int id);
extern void func_0C5338(int id);
extern int func_0AAE20(void);
extern void func_0B8910(int value);
extern int func_0ABF08(int id);
extern void func_018B98(int a, int b);
extern int func_0A1420(char *obj);

void func_0C5438(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_0795B8(0x6B10);
    if (func_0C6160() != 0) {
        func_0C5390(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_0A50B0(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_001B3070.items[D_001B3070.sel]->enabled == 0) {
        goto done;
    }
    func_0A50B0(1);
    if (D_001B3070.items[D_001B3070.sel]->id != 0) {
        goto choose;
    }
leave:
    func_0A50B0(7);
    func_018B98(4, 0);
    goto done;
choose:
    func_0A50B0(6);
    entry = D_001B3070.items[D_001B3070.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_001B2DA4 = 1;
            D_001B2DA5 = 0;
            func_0C5338(0x2A7);
        } else if (id == 0x66) {
            D_001B2DA4 = 0;
            D_001B2DA5 = 1;
            func_0C5338(0x2A8);
        } else if (id == 100) {
            D_001B2DA4 = 0;
            D_001B2DA5 = 0;
            D_001A1AB4->flags = D_001A1AB4->flags ^ 1;
        } else if (id == 6) {
            func_0B8910(func_0AAE20());
            func_0ABF08(6);
        }
    }
    goto done;
passthrough:
    func_0A86F8(&D_001B3070, pad);
done:
    D_001B3070.result = func_0A1420(D_001AAAB0);
}
