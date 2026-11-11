/* LEVEL_06:0x1390E8 -- placement copy of LEVEL_01_1429F0.c: when the first entry's 64-bit flag word has bit 0x80 set, registers the object with the handler. */
typedef struct Rec {
    char *first;
} Rec;

extern void func_138FF0(void);
extern void func_093410(int kind, void (*handler)(void), char *object, int arg);

void func_1390E8(char *object)
{
    Rec *rec = *(Rec **)(object + 0x58);
    if (*(long *)(rec->first + 0x968) & 0x80)
        func_093410(9, func_138FF0, object, 0);
}
