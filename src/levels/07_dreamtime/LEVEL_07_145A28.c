/* LEVEL_07:0x145A28 -- placement copy of LEVEL_01_1429F0.c: when the first entry's 64-bit flag word has bit 0x80 set, registers the object with the handler. */
typedef struct Rec {
    char *first;
} Rec;

extern void func_145930(void);
extern void func_09C6E0(int kind, void (*handler)(void), char *object, int arg);

void func_145A28(char *object)
{
    Rec *rec = *(Rec **)(object + 0x58);
    if (*(long *)(rec->first + 0x968) & 0x80)
        func_09C6E0(9, func_145930, object, 0);
}
