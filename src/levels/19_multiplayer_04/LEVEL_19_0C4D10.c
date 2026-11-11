/* LEVEL_19:0x0C4D10 -- placement copy of LEVEL_01_0D5D40.c: handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
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

extern Menu D_001B41F0;
extern Game *D_001A2C34;
extern char D_001B3F24;
extern char D_001B3F25;
extern char D_001ABC30[];

extern unsigned int func_079AA0(int arg);
extern int func_0C5A38(void);
extern void func_0C4C68(unsigned int pad);
extern int func_0A7FD0(Menu *menu, unsigned int pad);
extern int func_0A4928(int id);
extern void func_0C4C10(int id);
extern int func_0AA6F8(void);
extern void func_0B81E8(int value);
extern int func_0AB7E0(int id);
extern void func_018898(int a, int b);
extern int func_0A0CB0(char *obj);

void func_0C4D10(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_079AA0(0x6B10);
    if (func_0C5A38() != 0) {
        func_0C4C68(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_0A4928(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_001B41F0.items[D_001B41F0.sel]->enabled == 0) {
        goto done;
    }
    func_0A4928(1);
    if (D_001B41F0.items[D_001B41F0.sel]->id != 0) {
        goto choose;
    }
leave:
    func_0A4928(7);
    func_018898(4, 0);
    goto done;
choose:
    func_0A4928(6);
    entry = D_001B41F0.items[D_001B41F0.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_001B3F24 = 1;
            D_001B3F25 = 0;
            func_0C4C10(0x2A7);
        } else if (id == 0x66) {
            D_001B3F24 = 0;
            D_001B3F25 = 1;
            func_0C4C10(0x2A8);
        } else if (id == 100) {
            D_001B3F24 = 0;
            D_001B3F25 = 0;
            D_001A2C34->flags = D_001A2C34->flags ^ 1;
        } else if (id == 6) {
            func_0B81E8(func_0AA6F8());
            func_0AB7E0(6);
        }
    }
    goto done;
passthrough:
    func_0A7FD0(&D_001B41F0, pad);
done:
    D_001B41F0.result = func_0A0CB0(D_001ABC30);
}
