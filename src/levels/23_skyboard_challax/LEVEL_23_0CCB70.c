/* LEVEL_23:0x0CCB70 -- placement copy of LEVEL_01_0D5D40.c: handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
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

extern Menu D_001D85C0;
extern Game *D_001C73AC;
extern char D_001D82F4;
extern char D_001D82F5;
extern char D_001CFE30[];

extern unsigned int func_07DEE0(int arg);
extern int func_0CD898(void);
extern void func_0CCAC8(unsigned int pad);
extern int func_0B0440(Menu *menu, unsigned int pad);
extern int func_0ACDE8(int id);
extern void func_0CCA70(int id);
extern int func_0B2AC8(void);
extern void func_0C0268(int value);
extern int func_0B3820(int id);
extern void func_019338(int a, int b);
extern int func_0A9898(char *obj);

void func_0CCB70(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_07DEE0(0x6B10);
    if (func_0CD898() != 0) {
        func_0CCAC8(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_0ACDE8(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_001D85C0.items[D_001D85C0.sel]->enabled == 0) {
        goto done;
    }
    func_0ACDE8(1);
    if (D_001D85C0.items[D_001D85C0.sel]->id != 0) {
        goto choose;
    }
leave:
    func_0ACDE8(7);
    func_019338(4, 0);
    goto done;
choose:
    func_0ACDE8(6);
    entry = D_001D85C0.items[D_001D85C0.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_001D82F4 = 1;
            D_001D82F5 = 0;
            func_0CCA70(0x2A7);
        } else if (id == 0x66) {
            D_001D82F4 = 0;
            D_001D82F5 = 1;
            func_0CCA70(0x2A8);
        } else if (id == 100) {
            D_001D82F4 = 0;
            D_001D82F5 = 0;
            D_001C73AC->flags = D_001C73AC->flags ^ 1;
        } else if (id == 6) {
            func_0C0268(func_0B2AC8());
            func_0B3820(6);
        }
    }
    goto done;
passthrough:
    func_0B0440(&D_001D85C0, pad);
done:
    D_001D85C0.result = func_0A9898(D_001CFE30);
}
