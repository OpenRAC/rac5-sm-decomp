/* LEVEL_19:0x11F980 -- placement copy of LEVEL_16_11F018.c: reads the pad bits, plays the confirm or select cue (recording the chosen entry's id and key), otherwise steps the menu state, then stores the result of func_0A0CB0 in the menu block. */
typedef struct {
    int id;
    char pad04[0x08];
    unsigned char named;
    char pad0D[0xC3];
    int key;
} Rec;

typedef struct {
    char pad00[0x1C];
    int result;
} Menu;

extern Menu D_001BCC48;
extern char D_001ABC30[];
extern int D_002E17D0;
extern int D_002E17D4;
extern unsigned int func_079AA0(int value);
extern int func_0A4928(int index);
extern int func_0AB7E0(int mode);
extern Rec *func_0A8D30(Menu *m);
extern int func_10F9D0(int id);
extern int func_0A7FD0(Menu *m, int flags);
extern int func_0A0CB0(char *obj);

void func_11F980(void)
{
    unsigned int bits;
    Rec *rec;

    bits = func_079AA0(0x6B10);
    if (bits & 0x1000) {
        func_0A4928(0);
        func_0A4928(7);
        func_0AB7E0(0x2C);
    } else if (bits & 0x4000) {
        rec = func_0A8D30(&D_001BCC48);
        if (rec != 0) {
            D_002E17D4 = rec->key;
            if (rec->named != 0) {
                D_002E17D0 = rec->id;
            } else {
                D_002E17D0 = func_10F9D0(rec->id);
            }
            func_0A4928(1);
            func_0A4928(6);
            func_0AB7E0(0x30);
        }
    } else {
        func_0A7FD0(&D_001BCC48, bits);
    }
    D_001BCC48.result = func_0A0CB0(D_001ABC30);
}
