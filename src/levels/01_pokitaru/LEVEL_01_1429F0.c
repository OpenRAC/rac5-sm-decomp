/* LEVEL_01:0x1429F0 -- when the first entry's 64-bit flag word has bit 0x80 set, registers the object with the handler. */
typedef struct Rec {
    char *first;
} Rec;

extern void func_1428F8(void);
extern void func_09A700(int kind, void (*handler)(void), char *object, int arg);

void func_1429F0(char *object)
{
    Rec *rec = *(Rec **)(object + 0x58);
    if (*(long *)(rec->first + 0x968) & 0x80)
        func_09A700(9, func_1428F8, object, 0);
}
