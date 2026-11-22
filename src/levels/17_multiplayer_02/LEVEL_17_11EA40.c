/* LEVEL_17:0x11EA40 -- placement copy of LEVEL_16_11F018.c: reads the pad bits, plays the confirm or select cue (recording the chosen entry's id and key), otherwise steps the menu state, then stores the result of func_0A0918 in the menu block. */
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

extern Menu D_001AF0C8;
extern char D_0019E0B0[];
extern int D_002D2950;
extern int D_002D2954;
extern unsigned int func_07A030(int value);
extern int func_0A4590(int index);
extern int func_0AB448(int mode);
extern Rec *func_0A8998(Menu *m);
extern int func_10E8A8(int id);
extern int func_0A7C38(Menu *m, int flags);
extern int func_0A0918(char *obj);

void func_11EA40(void)
{
    unsigned int bits;
    Rec *rec;

    bits = func_07A030(0x6B10);
    if (bits & 0x1000) {
        func_0A4590(0);
        func_0A4590(7);
        func_0AB448(0x2C);
    } else if (bits & 0x4000) {
        rec = func_0A8998(&D_001AF0C8);
        if (rec != 0) {
            D_002D2954 = rec->key;
            if (rec->named != 0) {
                D_002D2950 = rec->id;
            } else {
                D_002D2950 = func_10E8A8(rec->id);
            }
            func_0A4590(1);
            func_0A4590(6);
            func_0AB448(0x30);
        }
    } else {
        func_0A7C38(&D_001AF0C8, bits);
    }
    D_001AF0C8.result = func_0A0918(D_0019E0B0);
}
