/* LEVEL_05:0x13E358 -- placement copy of LEVEL_01_1429F0.c: when the first entry's 64-bit flag word has bit 0x80 set, registers the object with the handler. */
typedef struct Rec {
    char *first;
} Rec;

extern void func_13E260(void);
extern void func_097D60(int kind, void (*handler)(void), char *object, int arg);

void func_13E358(char *object)
{
    Rec *rec = *(Rec **)(object + 0x58);
    if (*(long *)(rec->first + 0x968) & 0x80)
        func_097D60(9, func_13E260, object, 0);
}
