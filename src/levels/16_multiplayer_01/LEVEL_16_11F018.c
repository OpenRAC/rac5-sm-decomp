/* LEVEL_16:0x11F018 -- reads the pad bits, plays the confirm or select cue (recording the chosen entry's id and key), otherwise steps the menu state, then stores the result of func_0A1420 in the menu block. */
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

extern Menu D_001BBAD0;
extern char D_001AAAB0[];
extern int D_002E1650;
extern int D_002E1654;
extern unsigned int func_0795B8(int value);
extern int func_0A50B0(int index);
extern int func_0ABF08(int mode);
extern Rec *func_0A9458(Menu *m);
extern int func_10F330(int id);
extern int func_0A86F8(Menu *m, int flags);
extern int func_0A1420(char *obj);

void func_11F018(void)
{
    unsigned int bits;
    Rec *rec;

    bits = func_0795B8(0x6B10);
    if (bits & 0x1000) {
        func_0A50B0(0);
        func_0A50B0(7);
        func_0ABF08(0x2C);
    } else if (bits & 0x4000) {
        rec = func_0A9458(&D_001BBAD0);
        if (rec != 0) {
            D_002E1654 = rec->key;
            if (rec->named != 0) {
                D_002E1650 = rec->id;
            } else {
                D_002E1650 = func_10F330(rec->id);
            }
            func_0A50B0(1);
            func_0A50B0(6);
            func_0ABF08(0x30);
        }
    } else {
        func_0A86F8(&D_001BBAD0, bits);
    }
    D_001BBAD0.result = func_0A1420(D_001AAAB0);
}
