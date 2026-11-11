/* LEVEL_02:0x148F78 -- placement copy of LEVEL_01_1429F0.c: when the first entry's 64-bit flag word has bit 0x80 set, registers the object with the handler. */
typedef struct Rec {
    char *first;
} Rec;

extern void func_148E80(void);
extern void func_0A0DD0(int kind, void (*handler)(void), char *object, int arg);

void func_148F78(char *object)
{
    Rec *rec = *(Rec **)(object + 0x58);
    if (*(long *)(rec->first + 0x968) & 0x80)
        func_0A0DD0(9, func_148E80, object, 0);
}
