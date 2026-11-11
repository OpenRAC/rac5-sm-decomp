/* LEVEL_08:0x154E70 -- placement copy of LEVEL_01_1429F0.c: when the first entry's 64-bit flag word has bit 0x80 set, registers the object with the handler. */
typedef struct Rec {
    char *first;
} Rec;

extern void func_154D78(void);
extern void func_0A27A0(int kind, void (*handler)(void), char *object, int arg);

void func_154E70(char *object)
{
    Rec *rec = *(Rec **)(object + 0x58);
    if (*(long *)(rec->first + 0x968) & 0x80)
        func_0A27A0(9, func_154D78, object, 0);
}
