/* LEVEL_24:0x1394A8 -- placement copy of LEVEL_01_1429F0.c: when the first entry's 64-bit flag word has bit 0x80 set, registers the object with the handler. */
typedef struct Rec {
    char *first;
} Rec;

extern void func_1393B0(void);
extern void func_093658(int kind, void (*handler)(void), char *object, int arg);

void func_1394A8(char *object)
{
    Rec *rec = *(Rec **)(object + 0x58);
    if (*(long *)(rec->first + 0x968) & 0x80)
        func_093658(9, func_1393B0, object, 0);
}
