/* LEVEL_17:0x0C4978 -- placement copy of LEVEL_01_0D5D40.c: handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
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

extern Menu D_001A6670;
extern Game *D_001950B4;
extern char D_001A63A4;
extern char D_001A63A5;
extern char D_0019E0B0[];

extern unsigned int func_07A030(int arg);
extern int func_0C56A0(void);
extern void func_0C48D0(unsigned int pad);
extern int func_0A7C38(Menu *menu, unsigned int pad);
extern int func_0A4590(int id);
extern void func_0C4878(int id);
extern int func_0AA360(void);
extern void func_0B7E50(int value);
extern int func_0AB448(int id);
extern void func_018518(int a, int b);
extern int func_0A0918(char *obj);

void func_0C4978(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_07A030(0x6B10);
    if (func_0C56A0() != 0) {
        func_0C48D0(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_0A4590(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_001A6670.items[D_001A6670.sel]->enabled == 0) {
        goto done;
    }
    func_0A4590(1);
    if (D_001A6670.items[D_001A6670.sel]->id != 0) {
        goto choose;
    }
leave:
    func_0A4590(7);
    func_018518(4, 0);
    goto done;
choose:
    func_0A4590(6);
    entry = D_001A6670.items[D_001A6670.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_001A63A4 = 1;
            D_001A63A5 = 0;
            func_0C4878(0x2A7);
        } else if (id == 0x66) {
            D_001A63A4 = 0;
            D_001A63A5 = 1;
            func_0C4878(0x2A8);
        } else if (id == 100) {
            D_001A63A4 = 0;
            D_001A63A5 = 0;
            D_001950B4->flags = D_001950B4->flags ^ 1;
        } else if (id == 6) {
            func_0B7E50(func_0AA360());
            func_0AB448(6);
        }
    }
    goto done;
passthrough:
    func_0A7C38(&D_001A6670, pad);
done:
    D_001A6670.result = func_0A0918(D_0019E0B0);
}
