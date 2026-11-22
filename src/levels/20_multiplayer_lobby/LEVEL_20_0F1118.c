/* LEVEL_20:0x0F1118 -- placement copy of LEVEL_16_11F018.c: reads the pad bits, plays the confirm or select cue (recording the chosen entry's id and key), otherwise steps the menu state, then stores the result of func_08BB18 in the menu block. */
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

extern Menu D_0011E170;
extern char D_0010D190[];
extern int D_00204BA8;
extern int D_00204BAC;
extern unsigned int func_067228(int value);
extern int func_08F6B0(int index);
extern int func_096438(int mode);
extern Rec *func_093988(Menu *m);
extern int func_0E2118(int id);
extern int func_092C28(Menu *m, int flags);
extern int func_08BB18(char *obj);

void func_0F1118(void)
{
    unsigned int bits;
    Rec *rec;

    bits = func_067228(0x6B10);
    if (bits & 0x1000) {
        func_08F6B0(0);
        func_08F6B0(7);
        func_096438(0x2C);
    } else if (bits & 0x4000) {
        rec = func_093988(&D_0011E170);
        if (rec != 0) {
            D_00204BAC = rec->key;
            if (rec->named != 0) {
                D_00204BA8 = rec->id;
            } else {
                D_00204BA8 = func_0E2118(rec->id);
            }
            func_08F6B0(1);
            func_08F6B0(6);
            func_096438(0x30);
        }
    } else {
        func_092C28(&D_0011E170, bits);
    }
    D_0011E170.result = func_08BB18(D_0010D190);
}
