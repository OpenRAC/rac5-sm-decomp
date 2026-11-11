/* LEVEL_09:0x0D2FF0 -- placement copy of LEVEL_01_0D5D40.c: handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
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

extern Menu D_001EEFC0;
extern Game *D_001DDDAC;
extern char D_001EECF4;
extern char D_001EECF5;
extern char D_001E6830[];

extern unsigned int func_0849D8(int arg);
extern int func_0D3D18(void);
extern void func_0D2F48(unsigned int pad);
extern int func_0B6958(Menu *menu, unsigned int pad);
extern int func_0B32D0(int id);
extern void func_0D2EF0(int id);
extern int func_0B8FE0(void);
extern void func_0C6778(int value);
extern int func_0B9D30(int id);
extern void func_019C18(int a, int b);
extern int func_0AFD68(char *obj);

void func_0D2FF0(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_0849D8(0x6B10);
    if (func_0D3D18() != 0) {
        func_0D2F48(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_0B32D0(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_001EEFC0.items[D_001EEFC0.sel]->enabled == 0) {
        goto done;
    }
    func_0B32D0(1);
    if (D_001EEFC0.items[D_001EEFC0.sel]->id != 0) {
        goto choose;
    }
leave:
    func_0B32D0(7);
    func_019C18(4, 0);
    goto done;
choose:
    func_0B32D0(6);
    entry = D_001EEFC0.items[D_001EEFC0.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_001EECF4 = 1;
            D_001EECF5 = 0;
            func_0D2EF0(0x2A7);
        } else if (id == 0x66) {
            D_001EECF4 = 0;
            D_001EECF5 = 1;
            func_0D2EF0(0x2A8);
        } else if (id == 100) {
            D_001EECF4 = 0;
            D_001EECF5 = 0;
            D_001DDDAC->flags = D_001DDDAC->flags ^ 1;
        } else if (id == 6) {
            func_0C6778(func_0B8FE0());
            func_0B9D30(6);
        }
    }
    goto done;
passthrough:
    func_0B6958(&D_001EEFC0, pad);
done:
    D_001EEFC0.result = func_0AFD68(D_001E6830);
}
