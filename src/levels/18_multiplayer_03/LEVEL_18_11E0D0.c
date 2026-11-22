/* LEVEL_18:0x11E0D0 -- placement copy of LEVEL_16_11F018.c: reads the pad bits, plays the confirm or select cue (recording the chosen entry's id and key), otherwise steps the menu state, then stores the result of func_0A0430 in the menu block. */
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

extern Menu D_001BCF50;
extern char D_001ABF30[];
extern int D_002E19D0;
extern int D_002E19D4;
extern unsigned int func_078F38(int value);
extern int func_0A40A8(int index);
extern int func_0AAEE0(int mode);
extern Rec *func_0A8430(Menu *m);
extern int func_10DFE0(int id);
extern int func_0A76D0(Menu *m, int flags);
extern int func_0A0430(char *obj);

void func_11E0D0(void)
{
    unsigned int bits;
    Rec *rec;

    bits = func_078F38(0x6B10);
    if (bits & 0x1000) {
        func_0A40A8(0);
        func_0A40A8(7);
        func_0AAEE0(0x2C);
    } else if (bits & 0x4000) {
        rec = func_0A8430(&D_001BCF50);
        if (rec != 0) {
            D_002E19D4 = rec->key;
            if (rec->named != 0) {
                D_002E19D0 = rec->id;
            } else {
                D_002E19D0 = func_10DFE0(rec->id);
            }
            func_0A40A8(1);
            func_0A40A8(6);
            func_0AAEE0(0x30);
        }
    } else {
        func_0A76D0(&D_001BCF50, bits);
    }
    D_001BCF50.result = func_0A0430(D_001ABF30);
}
