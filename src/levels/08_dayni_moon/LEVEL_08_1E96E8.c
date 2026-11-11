/* LEVEL_08:0x1E96E8 -- placement copy of LEVEL_01_1B3568.c: registers an embedded record of the object with the shared player's id, then reports success. */
typedef struct {
    char pad[0xF8];
    int wF8;
} Player;

extern Player *D_0023D4A4;
extern void func_023F50(char *record, int kind, int id, int flag);

int func_1E96E8(char *o)
{
    func_023F50(o + 0x74, 9, D_0023D4A4->wF8, -1);
    return 1;
}
