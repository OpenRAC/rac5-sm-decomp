/* LEVEL_02:0x0DC6D0 -- placement copy of LEVEL_01_0D5D40.c: handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
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

extern Menu D_0021A180;
extern Game *D_00208C2C;
extern char D_00219EB4;
extern char D_00219EB5;
extern char D_002119F0[];

extern unsigned int func_08E950(int arg);
extern int func_0DD3F8(void);
extern void func_0DC628(unsigned int pad);
extern int func_0BFFB8(Menu *menu, unsigned int pad);
extern int func_0BC930(int id);
extern void func_0DC5D0(int id);
extern int func_0C2640(void);
extern void func_0CFDD8(int value);
extern int func_0C3390(int id);
extern void func_01B188(int a, int b);
extern int func_0B93C8(char *obj);

void func_0DC6D0(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_08E950(0x6B10);
    if (func_0DD3F8() != 0) {
        func_0DC628(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_0BC930(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_0021A180.items[D_0021A180.sel]->enabled == 0) {
        goto done;
    }
    func_0BC930(1);
    if (D_0021A180.items[D_0021A180.sel]->id != 0) {
        goto choose;
    }
leave:
    func_0BC930(7);
    func_01B188(4, 0);
    goto done;
choose:
    func_0BC930(6);
    entry = D_0021A180.items[D_0021A180.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_00219EB4 = 1;
            D_00219EB5 = 0;
            func_0DC5D0(0x2A7);
        } else if (id == 0x66) {
            D_00219EB4 = 0;
            D_00219EB5 = 1;
            func_0DC5D0(0x2A8);
        } else if (id == 100) {
            D_00219EB4 = 0;
            D_00219EB5 = 0;
            D_00208C2C->flags = D_00208C2C->flags ^ 1;
        } else if (id == 6) {
            func_0CFDD8(func_0C2640());
            func_0C3390(6);
        }
    }
    goto done;
passthrough:
    func_0BFFB8(&D_0021A180, pad);
done:
    D_0021A180.result = func_0B93C8(D_002119F0);
}
