/* LEVEL_04:0x0DB5E8 -- placement copy of LEVEL_01_0D5D40.c: handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
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

extern Menu D_0021E680;
extern Game *D_0020D12C;
extern char D_0021E3B4;
extern char D_0021E3B5;
extern char D_00215EF0[];

extern unsigned int func_08B2B8(int arg);
extern int func_0DC318(void);
extern void func_0DB540(unsigned int pad);
extern int func_0BEE88(Menu *menu, unsigned int pad);
extern int func_0BB828(int id);
extern void func_0DB4E8(int id);
extern int func_0C1540(void);
extern void func_0CECE0(int value);
extern int func_0C2298(int id);
extern void func_01A4A8(int a, int b);
extern int func_0B8068(char *obj);

void func_0DB5E8(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_08B2B8(0x6B10);
    if (func_0DC318() != 0) {
        func_0DB540(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_0BB828(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_0021E680.items[D_0021E680.sel]->enabled == 0) {
        goto done;
    }
    func_0BB828(1);
    if (D_0021E680.items[D_0021E680.sel]->id != 0) {
        goto choose;
    }
leave:
    func_0BB828(7);
    func_01A4A8(4, 0);
    goto done;
choose:
    func_0BB828(6);
    entry = D_0021E680.items[D_0021E680.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_0021E3B4 = 1;
            D_0021E3B5 = 0;
            func_0DB4E8(0x2A7);
        } else if (id == 0x66) {
            D_0021E3B4 = 0;
            D_0021E3B5 = 1;
            func_0DB4E8(0x2A8);
        } else if (id == 100) {
            D_0021E3B4 = 0;
            D_0021E3B5 = 0;
            D_0020D12C->flags = D_0020D12C->flags ^ 1;
        } else if (id == 6) {
            func_0CECE0(func_0C1540());
            func_0C2298(6);
        }
    }
    goto done;
passthrough:
    func_0BEE88(&D_0021E680, pad);
done:
    D_0021E680.result = func_0B8068(D_00215EF0);
}
