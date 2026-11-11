/* LEVEL_24:0x0CF690 -- placement copy of LEVEL_01_0D5D40.c: handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
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

extern Menu D_001D5E40;
extern Game *D_001C4C2C;
extern char D_001D5B74;
extern char D_001D5B75;
extern char D_001CD6B0[];

extern unsigned int func_0812C0(int arg);
extern int func_0D03C0(void);
extern void func_0CF5E8(unsigned int pad);
extern int func_0B2F38(Menu *menu, unsigned int pad);
extern int func_0AF8B0(int id);
extern void func_0CF590(int id);
extern int func_0B55F0(void);
extern void func_0C2D90(int value);
extern int func_0B6348(int id);
extern void func_018E18(int a, int b);
extern int func_0AC330(char *obj);

void func_0CF690(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_0812C0(0x6B10);
    if (func_0D03C0() != 0) {
        func_0CF5E8(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_0AF8B0(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_001D5E40.items[D_001D5E40.sel]->enabled == 0) {
        goto done;
    }
    func_0AF8B0(1);
    if (D_001D5E40.items[D_001D5E40.sel]->id != 0) {
        goto choose;
    }
leave:
    func_0AF8B0(7);
    func_018E18(4, 0);
    goto done;
choose:
    func_0AF8B0(6);
    entry = D_001D5E40.items[D_001D5E40.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_001D5B74 = 1;
            D_001D5B75 = 0;
            func_0CF590(0x2A7);
        } else if (id == 0x66) {
            D_001D5B74 = 0;
            D_001D5B75 = 1;
            func_0CF590(0x2A8);
        } else if (id == 100) {
            D_001D5B74 = 0;
            D_001D5B75 = 0;
            D_001C4C2C->flags = D_001C4C2C->flags ^ 1;
        } else if (id == 6) {
            func_0C2D90(func_0B55F0());
            func_0B6348(6);
        }
    }
    goto done;
passthrough:
    func_0B2F38(&D_001D5E40, pad);
done:
    D_001D5E40.result = func_0AC330(D_001CD6B0);
}
