/* LEVEL_03:0x0487F0 -- placement copy of LEVEL_01_04A530.c: player state check: when the charge counter is running and the attached target allows it, and the global input mode accepts the object's flag word (0x4100 in mode 2, else 0x4000), switches the object to state 6 and runs the transition; reports whether it did. */
typedef struct {
    float f_00;
} Rec;

typedef struct {
    char pad_00[0x23C];
    float f_23C;
} Obj;

typedef struct Mode {
    char pad_00[0x24];
    int kind;
} Mode;

typedef struct ModeRef {
    Mode *mode;
} ModeRef;

extern ModeRef D_0020C62C;
extern int func_0487B8(Rec *a0);
extern void func_047208(Obj *a0);

int func_0487F0(char *o)
{
    char *state;
    char *p;

    if (*(float *)(o + 0x128) == 0.0f) {
        return 0;
    }
    if (*(int *)(o + 0x9A0) == 0xC) {
        p = *(char **)(o + 0x5A4);
        if (p != 0 && *(unsigned char *)(p + 0x45) == 1) {
            return 0;
        }
    }
    state = o + 0xC0;
    if (*(int *)(o + 0x168) != 1) {
        if (*(int *)(o + 0x168) != 2) {
            return 0;
        }
        if (func_0487B8((Rec *)(o + 0x128)) == 0) {
            return 0;
        }
    }
    if (D_0020C62C.mode->kind == 2 ? (*(unsigned int *)(state + 0x18) & 0x4100) != 0 : (*(unsigned int *)(state + 0x18) & 0x4000) != 0) {
        *(short *)(o + 0x102) = 6;
        func_047208((Obj *)o);
        return 1;
    }
    return 0;
}
