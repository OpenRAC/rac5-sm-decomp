/* LEVEL_01:0x1B3568 -- registers an embedded record of the object with the shared player's id, then reports success. */
typedef struct {
    char pad[0xF8];
    int wF8;
} Player;

extern Player *D_001F45E4;
extern void func_023838(char *record, int kind, int id, int flag);

int func_1B3568(char *o)
{
    func_023838(o + 0x74, 9, D_001F45E4->wF8, -1);
    return 1;
}
