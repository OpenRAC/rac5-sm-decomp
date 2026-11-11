/* LEVEL_06:0x0D0640 -- placement copy of LEVEL_01_0D5D40.c: handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
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

extern Menu D_001F40C0;
extern Game *D_001E2EAC;
extern char D_001F3DF4;
extern char D_001F3DF5;
extern char D_001EB930[];

extern unsigned int func_080E98(int arg);
extern int func_0D1368(void);
extern void func_0D0598(unsigned int pad);
extern int func_0B3FA8(Menu *menu, unsigned int pad);
extern int func_0B0848(int id);
extern void func_0D0540(int id);
extern int func_0B6630(void);
extern void func_0C3DC8(int value);
extern int func_0B7380(int id);
extern void func_019028(int a, int b);
extern int func_0AD2F8(char *obj);

void func_0D0640(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_080E98(0x6B10);
    if (func_0D1368() != 0) {
        func_0D0598(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_0B0848(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_001F40C0.items[D_001F40C0.sel]->enabled == 0) {
        goto done;
    }
    func_0B0848(1);
    if (D_001F40C0.items[D_001F40C0.sel]->id != 0) {
        goto choose;
    }
leave:
    func_0B0848(7);
    func_019028(4, 0);
    goto done;
choose:
    func_0B0848(6);
    entry = D_001F40C0.items[D_001F40C0.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_001F3DF4 = 1;
            D_001F3DF5 = 0;
            func_0D0540(0x2A7);
        } else if (id == 0x66) {
            D_001F3DF4 = 0;
            D_001F3DF5 = 1;
            func_0D0540(0x2A8);
        } else if (id == 100) {
            D_001F3DF4 = 0;
            D_001F3DF5 = 0;
            D_001E2EAC->flags = D_001E2EAC->flags ^ 1;
        } else if (id == 6) {
            func_0C3DC8(func_0B6630());
            func_0B7380(6);
        }
    }
    goto done;
passthrough:
    func_0B3FA8(&D_001F40C0, pad);
done:
    D_001F40C0.result = func_0AD2F8(D_001EB930);
}
