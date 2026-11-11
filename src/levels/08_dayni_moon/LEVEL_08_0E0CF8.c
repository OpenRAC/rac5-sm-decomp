/* LEVEL_08:0x0E0CF8 -- placement copy of LEVEL_01_0D5D40.c: handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
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

extern Menu D_0024E080;
extern Game *D_0023CB2C;
extern char D_0024DDB4;
extern char D_0024DDB5;
extern char D_002458F0[];

extern unsigned int func_090070(int arg);
extern int func_0E1A28(void);
extern void func_0E0C50(unsigned int pad);
extern int func_0C4598(Menu *menu, unsigned int pad);
extern int func_0C0F10(int id);
extern void func_0E0BF8(int id);
extern int func_0C6C50(void);
extern void func_0D43F0(int value);
extern int func_0C79A8(int id);
extern void func_01B1A0(int a, int b);
extern int func_0BD750(char *obj);

void func_0E0CF8(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_090070(0x6B10);
    if (func_0E1A28() != 0) {
        func_0E0C50(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_0C0F10(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_0024E080.items[D_0024E080.sel]->enabled == 0) {
        goto done;
    }
    func_0C0F10(1);
    if (D_0024E080.items[D_0024E080.sel]->id != 0) {
        goto choose;
    }
leave:
    func_0C0F10(7);
    func_01B1A0(4, 0);
    goto done;
choose:
    func_0C0F10(6);
    entry = D_0024E080.items[D_0024E080.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_0024DDB4 = 1;
            D_0024DDB5 = 0;
            func_0E0BF8(0x2A7);
        } else if (id == 0x66) {
            D_0024DDB4 = 0;
            D_0024DDB5 = 1;
            func_0E0BF8(0x2A8);
        } else if (id == 100) {
            D_0024DDB4 = 0;
            D_0024DDB5 = 0;
            D_0023CB2C->flags = D_0023CB2C->flags ^ 1;
        } else if (id == 6) {
            func_0D43F0(func_0C6C50());
            func_0C79A8(6);
        }
    }
    goto done;
passthrough:
    func_0C4598(&D_0024E080, pad);
done:
    D_0024E080.result = func_0BD750(D_002458F0);
}
