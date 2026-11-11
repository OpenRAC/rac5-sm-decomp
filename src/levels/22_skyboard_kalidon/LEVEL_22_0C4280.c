/* LEVEL_22:0x0C4280 -- placement copy of LEVEL_01_0D5D40.c: handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
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

extern Menu D_00164540;
extern Game *D_0015332C;
extern char D_00164274;
extern char D_00164275;
extern char D_0015BDB0[];

extern unsigned int func_079438(int arg);
extern int func_0C4FA8(void);
extern void func_0C41D8(unsigned int pad);
extern int func_0A7B50(Menu *menu, unsigned int pad);
extern int func_0A4570(int id);
extern void func_0C4180(int id);
extern int func_0AA1D8(void);
extern void func_0B7978(int value);
extern int func_0AAF30(int id);
extern void func_016E40(int a, int b);
extern int func_0A1138(char *obj);

void func_0C4280(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_079438(0x6B10);
    if (func_0C4FA8() != 0) {
        func_0C41D8(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_0A4570(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_00164540.items[D_00164540.sel]->enabled == 0) {
        goto done;
    }
    func_0A4570(1);
    if (D_00164540.items[D_00164540.sel]->id != 0) {
        goto choose;
    }
leave:
    func_0A4570(7);
    func_016E40(4, 0);
    goto done;
choose:
    func_0A4570(6);
    entry = D_00164540.items[D_00164540.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_00164274 = 1;
            D_00164275 = 0;
            func_0C4180(0x2A7);
        } else if (id == 0x66) {
            D_00164274 = 0;
            D_00164275 = 1;
            func_0C4180(0x2A8);
        } else if (id == 100) {
            D_00164274 = 0;
            D_00164275 = 0;
            D_0015332C->flags = D_0015332C->flags ^ 1;
        } else if (id == 6) {
            func_0B7978(func_0AA1D8());
            func_0AAF30(6);
        }
    }
    goto done;
passthrough:
    func_0A7B50(&D_00164540, pad);
done:
    D_00164540.result = func_0A1138(D_0015BDB0);
}
